#include <iostream> 

void f (int *j) 
{
    *j = 100; // The value j points to is 100. 
}

int main() 
{
    int i = 0; 
    int *p; 
    
    p = &i; // p contains i's address. 
    f(p); 
    std::cout << i << std::endl; 
    return 0; 
}


