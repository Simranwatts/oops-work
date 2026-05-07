#include <iostream> 
using namespace std;

//	Base Class
class A {
  public:
  void showA() {
  cout << "Class A\n";
  }
  
  };
  
  // ----------- Single Inheritance -----------
class B : public A {
  public:
  void showB() {
  cout << "Class B (Single Inheritance)\n";
  }
  
  };
  
  // ----------- Multilevel Inheritance -----------
class C : public B {
  public:
  void showC() {
  cout << "Class C (Multilevel Inheritance)\n";
  }

};

  // ----------- Multiple Inheritance -----------
class X {
  public:
  void showX() {
  cout << "Class X\n";
  }

};

class Y { 
  public:
  void showY() {
  cout << "Class Y\n";
  }

};

class Z : public X, public Y { 
  public:
  void showZ() {
  cout << "Class Z (Multiple Inheritance)\n";
  }
};

// ----------- Hierarchical Inheritance -----------
class D : public A {
public:

void showD() {

cout << "Class D (Hierarchical Inheritance)\n";

}

};

class E : public A { 
  public:
  void showE() {
  cout << "Class E (Hierarchical Inheritance)\n";
  }

};

// ----------- Hybrid Inheritance -----------

// Combination: Multilevel + Multiple 
class P {
  public:
  void showP() {
  cout << "Class P\n";
  
  }

};

class Q : public P { 
  public:
  void showQ() {
  cout << "Class Q\n";
  }

};

class R { 
  public:
  void showR() {
  cout << "Class R\n";
  }

};

class S : public Q, public R { 
  public:
  void showS() {
  cout << "Class S (Hybrid Inheritance)\n";
  }

};

int main() {

// Single 
B b; 
b.showA();
b.showB(); 
cout << endl;


// Multilevel
C c; 
c.showA();
c.showB();
c.showC(); 
cout << endl;


// Multiple 
Z z; 
z.showX();
z.showY();
z.showZ(); 
cout << endl;


// Hierarchical
D d;
E e;
d.showA();
d.showD();
e.showA();
e.showE(); cout << endl;

// Hybrid 
S s; 
s.showP();
s.showQ();
s.showR();
s.showS(); 
return 0;
}


