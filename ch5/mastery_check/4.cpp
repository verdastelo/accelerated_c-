/*
    Create your own version of the standard library
    function strlen(). Call your version mystrlen(), and
    demonstrate its use in a program. 
*/

#include <iostream> 
#include <cstring> 
#include <cctype> 

int mystrlen(char sentence[])
{
    int count = 0; 
    for (int i = 0; sentence[i]; i++) {
        count++;
     }
    
    return count;
}

int main() 
{
    char sen[] = "Карлсон - это маленький мальчик.";
    int length = mystrlen(sen); 
    std::cout << "The string's length is: " 
              << length << std::endl; 
    return 0; 
}
