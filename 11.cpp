#include <iostream> 
using namespace std;

// Engine class (independent class) 
class Engine {
  public:
  void startEngine() {
  cout << "Engine started successfully 🚀\n";
  }
  
  void stopEngine() {
  cout << "Engine stopped.\n";
  }
};



// Fuel System class 
class FuelSystem { 
  public:
  void fillFuel() {
  cout << "Fuel tank filled with plasma fuel \n";
  }
};



// Spaceship class (HAS-A relationship) 
class Spaceship {
  private:
  Engine engine;	// Containership 
  FuelSystem fuel;	// Containership
  
  public:
  void launch() {
  cout << "\nPreparing Spaceship Launch...\n"; 
  fuel.fillFuel();
  engine.startEngine();
  cout << "Spaceship is now LAUNCHED into space \n";
  }
  
  void landing() {
  
  cout << "\nInitiating Landing Sequence...\n"; 
  engine.stopEngine();
  cout << "Spaceship has landed safely on Earth \n";
  }
};



int main() {

Spaceship s1; 
s1.launch();
s1.landing(); 
return 0;
}
