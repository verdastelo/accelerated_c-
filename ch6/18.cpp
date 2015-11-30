/*
    Shows how overloading can cause ambiguity.
*/

#include <iostream> 

float myfunc (float i) 
{
    return i;
}

double myfunc (double i)
{
    return -i;
}

int main()
{
    std::cout << myfunc (10.1) << std::endl;
    // This statement confuses the compiler.
    // It cannot figure out if to consider 10 
    // a double or float.  
    std::cout << myfunc (10) << std::endl; 
    return 0;
}
