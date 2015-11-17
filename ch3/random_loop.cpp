#include <iostream> 
#include <cstdlib>

using namespace std; 

int main(void) {

    int ran = rand(); 
    
    cout << ran << endl; 
    
    for (int i = 0; ran <= 1804289383; i++) {
        cout << ran << endl; 
        }
        
    return 0; 
    }
