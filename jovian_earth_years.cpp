#include <iostream> 

using namespace std;

int main() {
    double jovian_year = 0; 
    double terrestrial_year = 0; 
    
    // Terrestrial year to Jovian year. 
    
     
    
    cout << "How many Jovian years old are you? " << endl; 
    cin >> jovian_year; 
    
    terrestrial_year = jovian_year * 12.0;
    
    cout << "Oh my Lord! It means you are " << terrestrial_year
        << " terrestrial years old. " << endl; 
    return 0; 
    }
