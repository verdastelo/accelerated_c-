/* 
    The increment expression in a for lopp need not always alter the loop control variable by a fixed amount. Instead, the loop control variable can change in any artibrary way. Using this concept, write a program that uses a for loop to generate and display the progression 1, 2, 4, 8, 16, 32, and so on. */
    
#include <iostream> 

int main() {
    // This is a case of geometric progression. 
    // i is multiplied by 2 after each iteration.
    // One million is chosen arbitrarily. Without this bound, the program will run forever. 
    for (int i = 1; i < 1000000; i *= 2) {
        std::cout << i << std::endl; 
        }
        
    return 0; 
    }
