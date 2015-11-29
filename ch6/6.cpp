#include <iostream> 

int main()
{
    int i = 1979;
    int* p = &i; 
    std::cout << "i is " << i << " and "
              << "p is " << p << ' '
              << std::endl;
    return 0;
}

