/* This program: 
    1. Accepts input until a $ is typed. 
    2. Counts the number of periods(.).
    3. Reports the number of periods when the program terminates. */ 

#include <iostream> 

int main(void) {
    char input = ' ';
    int count = 0; 
    std::cout << "Enter your input: " << std::endl; 
    
    while (std::cin >> input) {
    
    if (input == '$') {
            std::cout << "This program ends here." << std::endl; 
            break; 
        }        
    switch (input) {
        case '.': {
            count++; 
            std::cout << '.' << std::endl; 
            break; 
         }
        default: 
            std::cout << input << std::endl; 
          }
      }
      
      std::cout << "You have entered " << count << " periods." << std::endl; 
          return 0; 
          
      }
