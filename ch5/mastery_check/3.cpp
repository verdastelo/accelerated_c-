/*
    Can a function return a pointer? 
    Can a function return an array? 
*/

/*
    Yes, a function can return a pointer. 
    A function cannot return an array. Here is a program
    that supports my assertion. 
*/

#include <iostream> 

char test()
{
    return "This is an array."; 
}

int main()
{
    test(); 
    return 0;
}


