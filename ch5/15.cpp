/*
    Print a sentence backwards. 
*/

#include <iostream> 

void reverse(char *s); 

int main()
{
    char str[] = "This is a test."; 
    
    reverse (str); 
    
    std::cout << '\n'; 
    
    return 0; 
}

void reverse (char *s)
{
    if (*s) {
        reverse(s+1); 
    }
    
    else 
        return; 
        
    std::cout << *s; 
}
