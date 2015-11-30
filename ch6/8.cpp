/*
    A swap function created using reference parameters.
*/

#include <iostream> 

void swap (int &x, int &y) // x and y point to two integer values. 
{
    int temp = x; // the value that x points to is stored in temp.
    x = y; // the value that y points to is assigned to x
    y = temp; // the value is temp is assigned to the memory
              // pointed to by y
}

int main()
{
    int i = 10, j = 20; 
    std::cout << "Initial values of i and j are: " 
              << i << " and " << j
              << std::endl;
              
    swap (i, j);
    std::cout << "Swapped values of i and j are: " 
              << i << " and " << j
              << std::endl; 
    
    return 0;
}
