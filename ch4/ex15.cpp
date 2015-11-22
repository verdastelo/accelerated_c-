/*
    This program reverses the case (upper- and lowercase)
    of characters in a string. 
*/

#include <iostream> 
#include <cctype> 

int main() 
    {
    char sen[80] = "Rakontoj de sinjoro Boccacio"; 
    std::cout << "Original string: " << sen << std::endl; 
    for (int i = 0; sen[i]; i++) {
        if (isupper(sen[i])) {
            sen[i] = tolower(sen[i]);
            }
        else if (islower(sen[i])) {
            sen[i] = toupper(sen[i]);
            }
     }
     std::cout << "Inverted case string: " << sen << std::endl;
     
     return 0;
     }
            
