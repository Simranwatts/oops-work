#include <iostream> 
using namespace std;


// Abstract Class 
class Shape { 
  public:
  // Pure virtual function (makes class abstract) 
  virtual void area() = 0;
  
  virtual void display() {
  cout << "This is a Shape\n";
  }
};

// Derived Class: Circle 
class Circle : public Shape { 
  private:
  float radius; 
  public:
  Circle(float r) { 
    radius = r;
  }
  void area() {
  cout << "Area of Circle: " << 3.14 * radius * radius << endl;
  }

};

// Derived Class: Rectangle 
class Rectangle : public Shape { 
  private:
  float length, breadth; 
  public:
  Rectangle(float l, float b) { 
  length = l;
  breadth = b;
  }

void area() {
  cout << "Area of Rectangle: " << length * breadth << endl;
  }
};



int main() {

Shape *s;	// Base class pointer 
Circle c(5);
Rectangle r(4, 6);

// Runtime Polymorphism 
s = &c;
s->display();

s->area(); 
cout << endl; 
s = &r;
s->display();
s->area(); 
return 0;
}
