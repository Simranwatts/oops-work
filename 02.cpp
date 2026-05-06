#include <iostream>
using namespace std;

class SI{
    private:
        float s;
    
    public:
        SI(float p, float r, int t = 1){
            s = (p*r*t)/100;
        }
        
        float simple_interest(){
            return this-> s;
        }
};
int main() {
   float amount = 123.65, r = 6.4, t = 2;
   SI s1(amount, r);
   SI s2(amount, r, t);
   cout << "Simple Interest : "<< s1.simple_interest() << endl;
   cout << "Simple Interest : "<< s2.simple_interest() << endl;
    return 0;
}
