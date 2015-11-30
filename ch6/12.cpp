/*
    Demonstrates a case of function overloading.
*/

#include <iostream> 

void function (int i)
{
    std::cout << "In function(int), i is: " << i << std::endl;
}

void function (int i, int j)
{
    std::cout << "In function (int, int), i and j are: " 
              << i << " and " << j 
              << std::endl;
}

void function (double k)
{
    std::cout << "In function (double), k is " << k << std::endl;
}

int main()
{
    function(10);
    function(10, 20);
    function(1.23);
    return 0;
}
