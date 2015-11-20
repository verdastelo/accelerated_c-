/*
    Convert a string to uppercase.
    
    1. This program works on ASCII strings. 
    2. It does not work on Cyrillic (Russian).
    3. Neither does it work on accented characters (Esperanto and   Portuguese). 
    4. Mandarin Chinese and Punjabi (predictably) show no change. 
     
*/ 

#include <iostream> 
#include <cstring> 
#include <cctype> 

int main() {
    char sen[80]; 
    int i = 0; 
    
    strcpy(sen, "Você goste do educação."); 
    
    for (int i = 0; sen[i]; i++) {
        sen[i] = toupper(sen[i]);
        }
        
    std::cout << sen << std::endl; 
    
    return 0; 
    
    }
