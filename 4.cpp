/* 
    Figure out if the last else belongs to if (x < 10) or if (y > 100). 
    The book's author disagree with what I say. */
    
#include <iostream> 

int main(void) {
    std::cout << "if (x < 10)\n" 
              << "\t if (y > 100) {\n" 
              << "\t\t if(!done) \n" 
              << "\t\t else y = z\n"
              << "\t}\n"
              << "else cout << \"error\"; // what if?" 
              << std::endl; 
              
    std::cout << "The last else belongs to if (y > 100) because it is the nearest if to it. " << std::endl; 
    return 0;
    }
