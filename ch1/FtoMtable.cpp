#include <iostream> 

using namespace std; 

int main(void) { 

    double feet = 0;
    double meters = 0; 
    int counter = 0; 
    
    for (feet = 1; feet <= 100; feet++) {
        meters = feet/3.1; 
        cout << feet << " feet equals " << meters << " meters" << endl; 
        
        counter++; 
        
        if (counter == 5) {
            cout << '\n'; 
            counter = 0; 
            }
        }
    return 0; 
    } 
