#include <iostream> 

using namespace std; 

int main(void) {
    int num = 0; 
    int den = 0; 
    
    cout << "Enter numerator: " << endl; 
    cin >> num; 
    
    cout << "Enter denominator: " << endl; 
    cin >> den; 
    
    if (den) {
        cout << "Result: " << num/den << endl; 
        }
    else 
        cout << "Cannot divide by 0." << endl; 
        
    return 0; 
}
