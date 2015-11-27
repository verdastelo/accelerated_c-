/*
    Demonstrates how to use a reference parameter.
*/

#include <iostream> 

void f(int &i); 

int main()
{
    int val = 1; 
    std::cout << "Old value for val: " 
              << val << std::endl; 
    
    f(val);
    
    std::cout << "New value for val: "
              << val << std::endl; 
              
    return 0;
}

void f (int &i)
{
    i = 10;  
}

