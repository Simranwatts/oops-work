#include <iostream>
using namespace std;

inline int difference(int a, int b){
    return a - b;
} 
int main() {
   int x = 5, y = 3;
   cout << "Difference : "<< difference(x, y);
    return 0;
}
