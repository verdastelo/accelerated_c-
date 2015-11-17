#include <iostream> 

using namespace std; 

int main(void) {
    for (int i = 0; ; ) {
        cout << i << endl; 
        i++; // Comment this part out and the loop will become perpetutal. 
        if (i == 100) {
            break; 
            }
        }
        return 0; 
        }
