#include <iostream> 

using namespace std; 

int main(void) {
    int len = 0; 
    
    cout << "Enter length (1 to 79): " << endl; 
    cin >> len; 
    
    while ((len > 0) && (len < 80)) {
        cout << '.'; 
        len--; 
        }
    return 0; 
    }
