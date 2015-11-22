/*
    This program prompts users to enter two strings and then
    compares the strings for equality. 
*/

#include <iostream> 
#include <cstdio> 
#include <cstring> 

int main() 
{
    char sen1[100];
    char sen2[100];
    char sen3[100]; 
    char sen4[100]; 
    
    std::cout << "Please enter a word: " << std::endl; 
    std::cin >> sen1; 
    
    for (int i = 0; i < 100; i++) {
        sen3[i] = tolower(sen1[i]); 
        }
    
    std::cout << "Please enter another word: " << std::endl; 
    std::cin >> sen2; 
    
    for (int i = 0; i < 100; i++) {
        sen4[i] = tolower(sen2[i]); 
        }
         
    if(!(strcmp(sen3, sen4))) {
        std::cout << "Voila! You have entered the same words." << std::endl; 
        }
        
    return 0;
    
}
