/*
    Shows how to use default arguments.
*/

#include <iostream> 

void myfunc (int x = 0, int y = 0)
{
    std::cout << "x: " << x 
              << " y: " << y
              << std::endl;
}

int main()
{
    myfunc(1, 2);
    myfunc(10);
    myfunc();
    return 0;
}

