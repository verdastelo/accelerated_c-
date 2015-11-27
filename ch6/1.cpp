/*
    Calling an argument into a function by its value. 
*/

#include <iostream> 

double reciprocal (double x); 

int main()
{
    double t = 10.0; 
    std::cout << "Reciprocal of 10.0 is " << reciprocal(t) << std::endl;
    std::cout << "Value of t is still: " << t << std::endl; 
    return 0; 
}

double reciprocal (double x)
{
    x = 1 / x; 
    return x; 
}


