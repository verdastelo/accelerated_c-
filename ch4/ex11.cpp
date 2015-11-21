/*
    A very simple computerized dictionary.
*/

#include <iostream> 
#include <cstring> 
#include <cctype> 

int main() {
    int i = 0;
    char str[80]; // This is a string of 80 characters. 
    char numbers[10][80] = { // This is a 2-D array. 
        "Anna", "12345",
        "Misha", "23456",
        "Dimitri", "34567",
        "Daina", "45678",
        "Phillip", "56789",
        }; 
        
        std::cout << "Enter your name: " << std::endl; 
        
        std::cin >> str; 
        
        for (i = 0; i < 10; i += 2) {
            if (!strcmp(str, numbers[i])) {
                std::cout << "Your telephone number is: " 
                          << numbers[i+1] 
                          << std::endl; 
                 break; 
                 }
             }
             
        if (i == 10) {
            std::cout << "Sorry, we "
                      << "don't have your telephone number "
                      << "in our directory. "
                      << std::endl; 
            }
            
        return 0; 
        
        }

int foo[] = {1, 2, 3, 4};
char str[6] = "Hello"; 
int num[] = {44, 55, 66, 77}; 
