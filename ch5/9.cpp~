#include <iostream> 

char *get_substr (char *sub, char *str) 
{
    char *p, *p2, *start; // Declares three pointers. 
    
    for (int i = 0; str[i]; i++) {
        p = &str[i]; // Assigns chars in str to p. 
        start = p; // Assigns p's value to start. 
        p2 = sub; // p2 holds sub's value. 
        while (*p2 && (*p2==*p)) {
            p++;
            p2++;
            }
        }
        
    if (!*p2) {
        return start; 
    }
    
    return 0; 
}

int main() 
{
    char *substr; 
    substr = get_substr("three", "one two three four.");
    std::cout << "Substring found: " << substr << std::endl;
    return 0;
}
