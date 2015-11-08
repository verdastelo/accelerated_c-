#include <iostream> 

using namespace std; 

int main(void) {
    bool b; 
    
    b = false; 
    cout << "b is " << b << endl; 
    
    b = true; 
    cout << "b is " << b << endl; 
    
    if (b) cout << "This is executed." << endl; 
    
    b = false; 
    if(b) cout << "This is not executed." << endl; 
    
    cout << "10 > 9 is " << (10 > 9) << endl; 
    
    return 0; 
    }
    
