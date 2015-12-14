#include <iostream> 

using namespace std; 

int main(void) {
    double earth_kilo = 0.0;
    double moon_kilo = 0.0; 
    
    int newline_counter = 0;
    
    for (earth_kilo = 1; earth_kilo <= 100; earth_kilo++) {
        moon_kilo = earth_kilo * (17.0/100.0); 
        cout << earth_kilo << " earth kilo is " << moon_kilo 
            << " moon kilos." << endl; 
         
        newline_counter++; 
        
        if (newline_counter == 25){
            cout << '\n' ; 
            newline_counter = 0; 
            }
        }
        
     return 0; 
}
