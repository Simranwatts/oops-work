#include <iostream> 
using namespace std;


// ----------- Without Virtual (No Polymorphism) -----------
class Base1 {
  public:
  void show() {
  cout << "Base1 show() called\n";
  }
};

class Derived1 : public Base1 { 
  public:
  void show() {
  cout << "Derived1 show() called\n";
  }
};



// ----------- With Virtual (Runtime Polymorphism) -----------
class Base2 {
  public:
  virtual void show() {
  cout << "Base2 show() called\n";
}
};
class Derived2 : public Base2 {
public:
  void show() {
  cout << "Derived2 show() called\n";
  }
};

int main() {
//	Without Virtual

Base1 *ptr1; 
Derived1 obj1; 
ptr1 = &obj1;
cout << "Without Virtual Function:\n"; 
ptr1->show(); // Calls Base1 version 
cout << endl;


//	With Virtual
Base2 *ptr2; 
Derived2 obj2; 
ptr2 = &obj2;
cout << "With Virtual Function:\n";

ptr2->show();	// Calls Derived2 version 
return 0;
}
