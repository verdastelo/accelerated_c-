#include <iostream> 

using namespace std; 

int main(void) {
    int j = 0; 
    for (int i = 0; i < 10; i++) {
        j = 1; 
        for ( ; ; ) {
            cout << j << ' '; 
            j++; 
            if (j == 10) {
                break; 
                }
            }
            cout << '\n'; 
         }
      return 0; 
      }
