/*
    Test functions
    
        toupper() 
        tolower()
        isupper()
        islower()
        isalpha()
        isdigit()
        isspace()
        ispunct()
        
    on English, Russian, Esperanto, Portuguese, Mandarin Chinese
    and Punjabi. 
*/

#include <iostream> 
#include <cstring> 
#include <cctype> 

int main() {
    
    char sen_eng[100];
    char sen_rus[100];
    char sen_esp[100];
    char sen_por[100];
    char sen_zh[100];
    char sen_pun[100]; 
    
    strcpy(sen_eng, "You like books.");
    strcpy(sen_rus, "Вам нравится книги.");
    strcpy(sen_esp, "Vi ŝatas librojn.");
    strcpy(sen_por, "Você gosta do livros.");
    strcpy(sen_zh, "你想书。");
    strcpy(sen_pun, "।ਤੁਹਾਨੂੰ ਕਿਤਾਬਾਂ ਪੰਸਦ ਹਨ।");
    // toupper and tolower work only on ASCII char arrays. 
    /*
    for (int i = 0; sen_rus[i]; i++) {
        sen_rus[i] = tolower(sen_rus[i]);
        }
        
    std::cout << sen_rus << std::endl;
    */ 
    
    // Tests isupper and islower also work only on ASCII char arrays. 
    /*if (isupper(sen_por[3])) {
        std::cout << "This character is in uppercase." << std::endl; 
        }
    */
    
    // Tests isalpha and ispunct work only on ASCII defined chars. 
    if (isalpha(sen_pun[0])) {
        std::cout << "This symbol is a char." << std::endl; 
        }
    
    return 0;
    
    }
    
