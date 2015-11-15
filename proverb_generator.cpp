// Demonstrates switch. 

#include <iostream> 

using namespace std; 

int main(void) {
    int num = 0; 
    
    cout << "Enter a number: " << endl; 
    cin >> num; 
    
    switch (num) {
        case 1: 
            cout << "A rolling stone gathers no moss." << endl; 
            break; 
        case 2: 
            cout << "A bird in hand is worth two in the bush." << endl; 
            break; 
        case 3: 
            cout << "A fool and his money are soon parted." << endl; 
            break; 
        default:
            cout << "You must enter any of 1, 2 or 3." << endl; 
        }
        
        return 0; 
        }
