#include <iostream> 
using namespace std; 

class Student { 
  private:
  int roll; 
  string name;

  public:
  // 1. Default Constructor 
  Student() {
    roll = 0;
    name = "Unknown";
    cout << "Default Constructor Called\n";
  }

// 2. Parameterized Constructor 
  Student(int r, string n) {
  roll = r; 
  name = n;
  cout << "Parameterized Constructor Called\n";
  }

// 3. Copy Constructor 
Student(const Student &s) {
roll = s.roll; name = s.name;
cout << "Copy Constructor Called\n";

}

// Display Function 
void display() {
cout << "Roll: " << roll << ", Name: " << name << endl;
}

};

int main() {

// Default Constructor 
  Student s1; 
  s1.display();
  
// Parameterized Constructor 
  Student s2(101, "Rahul"); 
  s2.display();
// Copy Constructor 
  Student s3 = s2; 
  s3.display(); 
  return 0;
}

