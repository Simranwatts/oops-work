#include <iostream> 
using namespace std; 
class Student { 
private:
int roll; 
string name;

// Static data member (shared by all objects) 
static int count;
public:
void getData() {

cout << "Enter Roll Number: "; cin >> roll;
cout << "Enter Name: "; cin >> name;
count++; // Increment count for each object
}

void display() {
cout << "\nRoll Number: " << roll; cout << "\nName: " << name << endl;
}

// Static member function 
static void showCount() {
cout << "\nTotal Students: " << count << endl;
}

};
// Definition of static data member 
int Student::count = 0;
int main() {
Student s1, s2;

cout << "Enter details for Student 1:\n"; s1.getData();
cout << "\nEnter details for Student 2:\n"; s2.getData();
cout << "\n--- Student Details ---"; s1.display();
s2.display();

// Calling static function (no object needed) 
Student::showCount();
return 0;

}

