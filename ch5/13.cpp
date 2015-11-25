/*
    Use a function's definition as its prototype.
*/

#include <iostream> 

bool isEven(int num) {
    if (!(num % 2) ) {
        return true; 
    }
    return false; 
    }
    
int main()
{
    if (isEven(4)) {
        std::cout << "4 is even." << std::endl; 
     }
     
     if (isEven(3)) {
        std::cout << "This will not display." << std::endl; 
     }
     
     return 0; 
}
