#include <iostream> 

using namespace std; 

int main(void) {
    for (int x = 1; x < 6; x++) {
        if (x == 1) {
            cout << "x is one." << endl; 
            }
         else if (x == 2) {
            cout << "x is two." << endl; 
            }
         else if (x == 3) {
            cout << "x is three." << endl; 
            }
         else if (x == 4) {
            cout << "x is four." << endl; 
            }
         else 
            cout << "x is not between 1 and 4." << endl; 
         }
         
         return 0; 
    }
