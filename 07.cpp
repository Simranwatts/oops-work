#include <iostream> 
using namespace std; 
  class Number { 
  private:
  int value;
  
  public:
  // Constructor 
  Number(int v = 0) {
  value = v;

}

// Overload + operator
Number operator + (Number n) { 
  return Number(value + n.value);
}

// Overload - operator

Number operator - (Number n) { 
  return Number(value - n.value);
}

// Overload ++ operator (prefix) 
Number operator ++ () {
  ++value; 
  return *this;
}

// Overload == operator
bool operator == (Number n) { 
  return (value == n.value);
}

// Overload << operator (friend function)
friend ostream& operator << (ostream &out, Number n);
};

// Definition of << operator
ostream& operator << (ostream &out, Number n) { out << n.value;
return out;
}

int main() {
Number n1(10), n2(5), n3;

// + operator 
n3 = n1 + n2;
cout << "Addition: " << n3 << endl;

// - operator 
n3 = n1 - n2;
cout << "Subtraction: " << n3 << endl;

// ++ operator
++n1;

cout << "After Increment: " << n1 << endl;

// == operator 
  if (n1 == n2)
cout << "n1 and n2 are Equal" << endl; 
  else
cout << "n1 and n2 are Not Equal" << endl; 
  return 0;
}
