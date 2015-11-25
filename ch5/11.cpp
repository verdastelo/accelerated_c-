/*
    Adds two numbers from the command line.
*/

#include <iostream> 
#include <cstdlib> 

int main(int argc, char* argv[]) 
{
    double a, b = 0.0; 
    
    if (argc != 3) {
        std::cout << "Usage: add num num: \n"; 
        return 1; 
     }
     
     a = atof(argv[1]); 
     b = atof(argv[2]); 
     
     std::cout << a + b << std::endl; 
     
     return 0; 
}
