#include <iostream> 

using namespace std; 

int main(void) {
    char choice = ' '; 
    
    do {
        cout << "Help on: \n"; 
        cout << " 1. if\n";
        cout << " 2. switch\n"; 
        cout << " 3. for\n"; 
        cout << " 4. while\n"; 
        cout << " 5. do-while\n"; 
        cout << "Choose one: "; 
        
        cin >> choice; 
        
        } while (choice < '1' || choice > '5') ;
        
    switch (choice) {
        case '1': 
            cout << "This is if statement." << endl; 
            break; 
        case '2': 
            cout << "This is switch statement." << endl; 
            break; 
        case '3': 
            cout << "This is for statement." << endl; 
            break; 
        case '4': 
            cout << "This is while statement." << endl; 
            break; 
        case '5': 
            cout << "This is do-while statement." << endl; 
            break; 
        }
        
        return 0; 
        }
        
