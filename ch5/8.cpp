#include <iostream> 
#include <cstring> 
#include <cctype> 

void stringInvertCase (char *str)
{
    while (*str) {
        if (isupper(*str)) {
            *str = tolower(*str); 
            }
        else if (islower(*str)) {
            *str = toupper(*str); 
            }
            
        str++; 
        }
}
      
int main() 
{
    char str[80]; 
    
    strcpy (str, "This is a test.");
    
    stringInvertCase(str); 
    
    std::cout << str << std::endl; 
    
    return 0; 
}
