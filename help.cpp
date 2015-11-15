#include <iostream> 

using namespace std; 

int main(void) {
    char choice = ' '; 
    
    cout << "Help on: " << endl;
    cout << "1. if" << endl; 
    cout << "2. switch" << endl; 
    cout << "Choose 1 or 2" << endl; 
    
    cin >> choice; 
    
    switch(choice) {
        case '1': cout << "if is a conditional." << endl; 
        break; 
        
        case '2': cout << "switch is an alternative to if." << endl; 
        break; 
        
        default: cout << "Selection not found." << endl; 
        break; 
        }
        
   return 0;
   } 
