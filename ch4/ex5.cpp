/*
    Read a string from keyboard through cin. 
    Uses the function fgets(). 
    Reads from standard input (stdin). 
*/

#include <iostream> 
#include <cstdio> 
#include <cstdlib> 

int main() {
    char sentence[100];
    
    std::cout << "Write something (My name is Khan, etc): " << std::endl;
    fgets(sentence, 100, stdin); 
    std::cout << "You wrote: " 
              << sentence << std::endl; 
    return 0; 
    }
