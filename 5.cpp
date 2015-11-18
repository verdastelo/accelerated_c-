/* 
    Show the for statement for a loop that counts from 1000 to 0 by -2.
    */
    
#include <iostream> 

int main(void) {
    for (int i = 1000; i > 0; i = (i - 2)) {
        std::cout << i << std::endl; 
        }
     return 0; 
     }
