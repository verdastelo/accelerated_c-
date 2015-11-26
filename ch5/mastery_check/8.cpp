/*
*/

#include <iostream> 

int main(int argc, char* argv[])
{
    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << '\n'; 
        char name[] = argv[i]; 
        std::cout << name << std::endl; 
        }
        
        
    return 0; 
}
