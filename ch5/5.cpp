#include <iostream> 

void f(int * j) 
{
    *j = 100; 
}

int main() 
{
    int i = 0; 
    f(&i); 
    std::cout << i << std::endl; 
    return 0; 
}
