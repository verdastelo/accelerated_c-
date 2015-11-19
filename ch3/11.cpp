/* 
    The ASCII lowercase letters are separated from the uppercase
    letters by 32. Thus, to convert a lowercase letter to uppercase,
    subtract 32 from it. Use this information to write a program that
    reads characters from the keyboard. Have it convert all lowercase
    letters to uppercase, and all uppercase letters to lowercase,
    displaying the result. Make no changes to any other character.
    Have the program stop when the user enters a period. At the end,
    have the program display the number of case chagnes that have
    taken place. 
    */ 

#include <iostream> 

int main() {
    char chr = ' '; 
    
    std::cout << "Enter your character: " << std::endl; 
    
    while (std::cin >> chr) {
        if (chr == '.') {
            break; 
            }
        else if ((chr >= 65) && (chr <= 90)) {
            std::cout << char(chr + 32) << std::endl; 
            }
        else if ((chr >= 97) && (chr <= 122)) {
            std::cout << char(chr - 32) << std::endl; 
            }
        else 
            std::cout << chr << std::endl; 
        }
    std::cout << "You have entered a period (.).\n" 
              << "The program ends here." << std::endl; 
    return 0; 
    }
