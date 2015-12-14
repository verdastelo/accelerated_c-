#include <iostream> 
#include <cstdlib>

using namespace std; 

int main(void) {
    int values = 0; 
    int counter = 0; 
    double sum = 0; 
    
    for (counter = 0; counter < 5; counter++) {
        cout << "Please enter a number: " << endl; 
        cin >> values; 
        int abs_val = 0; 
        abs_val = abs(values); 
        sum += abs_val; 
        }
        
   cout << "The average is: " << endl; 
   cout << sum/5.0 << endl; 
   return 0; 
   }
