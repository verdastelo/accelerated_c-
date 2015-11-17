#include <iostream> 

using namespace std; 

int main(void) {
    for (int i = 2; i < 100; i++) {
        cout << "Factors of " << i << " : "; 
        
        for (int j = 2; j <= (i/2); j++) {
            if ((i % j) == 0) {
                cout << j << " "; 
                } 
        }
        cout << "\n";
      }
        return 0; 
      }
