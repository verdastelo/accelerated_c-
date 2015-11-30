/*
    Create an overloaded neg(). 
    neg() returns the negative value of an int, double and long.
*/

#include <iostream> 

int neg (int n)
{
    return -n;
}

double neg (double n)
{
    return -n;
}

long neg (long n)
{
    return -n;
}

int main()
{
    std::cout << "neg(10) " << neg (10) << std::endl;
    std::cout << "neg(-0.1) " << neg (-0.1) << std::endl;
    std::cout << "neg(11000) " << neg (11000) << std::endl;
    return 0;
}

