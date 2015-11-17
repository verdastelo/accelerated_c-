// Magic number program. 

#include <iostream> 
#include <cstdlib> 

using namespace std; 

int main(void) {
    int magic = 0; 
    int guess = 0; 
    
    magic = rand(); 
    
    do {
    cout << "Enter the guess: \n"; 
    cin >> guess; 
    
    if (guess == magic) {
        cout << " *** Right *** " << endl; 
        cout << magic << " is the magic number." << endl; 
        }
    else {
        cout << "Sorry, you are wrong." << endl; 
        if (guess > magic) {
            cout << "Your guess is too high." << endl; 
            }
        else 
            cout << "Your guess is too low." << endl; 
        }
     } while (guess != magic); 
    return 0; 
    }
