/*
    Create a function called byThrees() that returns a series 
    of numbers, with each value 3 greater than the preceding one. 
    Have the series start at 0. Thus, the first five numbers
    returned by byThrees() are 0, 3, 6, 9 and 12. Create another
    function called reset() that causes byThrees() to start the 
    series over again from 0. Demonstrate your functions in a program.
    
    Hint: You will need to use a global variable. 
*/

#include <iostream> 

int i = 0; 

int byThrees()
{
    for (i; i < 1000; i += 3) {
        std::cout << i << ", " ; 
    }
    return 0; 
}

int reset()
{
    i = 0; 
    byThrees(); 
}

int main()
{
    byThrees(); 
    reset();
    std::cout << '\n'; 
    return 0; 
}
