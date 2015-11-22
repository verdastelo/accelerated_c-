/*
    This program searches an array of 10 integers for duplicate values. 
    It displays each duplicate found. 
*/

#include <iostream> 

int main()
{
    int ten[10] = {9, 8, 3, 4, 5, 6, 5, 7, 8, 9,};
    
    for (int i = 0; i < 10; i++) {
        for (int j = (i + 1); j < 10; j++) {
            if (ten[i] == ten[j]) {
                std::cout << ten[i] << std::endl;
                }
            }
        }
        
    return 0; 
    }
