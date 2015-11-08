#include <iostream> 
#include <cmath> 

using namespace std; 

int main(void) {
    double base, perpendicular, hypoteneuse; 
    
    cout << "Enter base: " << endl; 
    cin >> base; 
    
    cout << "Enter perpendicular: " << endl; 
    cin >> perpendicular; 
    
    hypoteneuse = sqrt(base*base + perpendicular*perpendicular); 
    
    cout << "The hypoteneuse is: " << hypoteneuse << endl; 
    
    return 0; 
    }
