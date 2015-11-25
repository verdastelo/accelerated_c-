/*
    Create a function called hypot() that computes the length
    of the hypoteneuse of a right triangle given the lengths of
    the two opposing sides. Demonstrate its use in a program. 
    For this problem, you will need to use the sqrt() standard
    library function, which returns the square root of its argument. 
    It has its prototype: 
        double sqrt(double val); 
    
    It uses the header <cmath>.
*/

#include <iostream> 
#include <cmath> 

double hypot (double height, double base) 
{
    double height_squared = 0.0;
    double base_squared = 0.0; 
    
    height_squared = height * height; 
    base_squared = base * base; 
    
    double hypoteneuse = sqrt ((height_squared + base_squared)); 
    
    return hypoteneuse; 
    
}

int main()
{
    double height = 0.0; 
    double base = 0.0; 
    std::cout << "Enter height: "; 
    std::cin >> height; 
    
    std::cout << "Enter base: "; 
    std::cin >> base;  
    
    std::cout << "Hypoteneuse is: " 
              << (hypot (height, base)) 
              << std::endl; 
    
    return 0; 
} 
