#include <iostream> 

double &f(); 

double val = 100.0; 

int main()
{
    double x; 
    std::cout << f() << '\n'; 
    x = f(); 
    std::cout << x << '\n';
    f() = 99.1; 
    std::cout << f() << '\n'; 
    return 0;
}

double &f()
{
    return val; 
}

