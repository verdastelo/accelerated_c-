/*
    Write and call an exponent program.
    Look up how to return an error. 
*/

#include <iostream> 

int power(int base = 0, int exponent = 0)
{

    int result = 1; 
    
    if (exponent < 0) {
        std::cout << "This facility is not available. " 
                  << std::endl; 
        }
    
    else
        for (int i = 1; i <= exponent; i++) {
            result *= base; 
            }
        
    return result;
}

int main()
{
    std::cout << "10 squared is: " 
              << power(2, -8)
              << std::endl; 
              
    return 0; 
}
