/* 
    Fun with string functions: 
    
        strcpy
        strcat 
        strcmp
        strlen
        
    This program does not accomplish anything. 
    The sole purpose of writing it is to practice four 
    C++ string functions without creating four different
    programs. 
    
    You cannot use all the blocks all the time. Prefer to 
    run only a block at a time. 
*/

#include <iostream> 
#include <cstdio> 
#include <cstring> 

int main() {
    char sen1[100];
    char sen2[300]; 
    
    std::cout << "Write something: " << std::endl; 
    fgets(sen1, 100, stdin); 
    std::cout << "You wrote: "
              << sen1 << std::endl; 
    
    std::cout << "Write something again: " << std::endl; 
    fgets(sen2, 100, stdin); 
    std::cout << "You wrote: " 
              << sen2 << std::endl; 
              
    
    // Do not use strcpy or strcat simultaneously. 
    // strcpy overwrites the content in sen2. 
    
    strcpy(sen2, sen1); 
    
    std::cout << "Did you write this the second time? " << '\n'
              << sen2 << '\n'
              << "Probably not!" << std::endl;
              
    // Using strcat with strcpy complicates the use of strcmp. 
    strcat(sen2, sen1);
              
    std::cout << "You have written so far that: " << '\n'
              << sen2 << std::endl; 
              
    if (strcmp(sen1, sen2)) {
        std::cout << sen1 << " says the same thing as "
                  << sen2 << std::endl; 
        }
        
    std::cout << "The length of the phrase " 
              << "you wrote the first time is: "
              << strlen(sen1) << std::endl; 
              
    return 0; 
    }
