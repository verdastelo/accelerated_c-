#include <iostream> 

using namespace std; 

int main(void) {
    int x = 1; 
    loop1: 
        cout << x << endl; 
        x++; 
        if (x < 100) goto loop1; 
        return 0; 
        }
