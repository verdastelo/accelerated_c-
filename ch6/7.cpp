/*
    This program uses a reference parameter. 
*/

#include <iostream> 

void function (int &i)
{
    i = 10;
}

int main()
{
    int val = 1; 
    std::cout << "Old value for val: " << val << '\n';
    function(val); 
    std::cout << "New value for val: " << val << '\n';
    return 0;
}
