#include <iostream> 

using namespace std; 

int main(void) {
    int i, j = 0; // Declare two integers. 
    bool isprime; // Declare a Boolean variable. 
    
    for (int i = 1; i < 100; i++) { // Run the following block of code for as long as i is less than 100. 
        isprime = true; // Set isprime to true. 
        
        for (j = 2; j < (i/2); j++) // Run the following block of code for as long as j is less than half of i. 
            if ((i%j) == 0) // If i is perfectly divisible by j, set isprime to false. 
                isprime =false; 
                
             
         if(isprime) // cout the following statement if isprime is true. 
            cout << i << " is prime.\n"; 
            
         }
         
     return 0; 
}
