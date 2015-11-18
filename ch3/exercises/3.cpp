/* 
    This program shows the general form of if-else-if ladder.
    Этот програм смотрит обычную форму if-else-if програма. 
    Author (Автор): Verda Stelo
    Date (День): Nov. 18, 2015 */ 
    
#include <iostream> 

int main(void) {
    std::cout << "The general form of if-else-if ladder is: " << std::endl; 
    
    std::cout << "if (expression) { \n"
         << "\t (statement) \n" 
         << "\t } \n" 
         << "\t else if (expression) {\n"
         << "\t\t (statement)\n"
         << "\t\t}\n"
         << "\t\t else if (expression) {\n" 
         << "\t\t\t (statement)\n" 
         << "\t\t\t}\n"
         << "\t\t\t .... \n" 
         << "\t\t\t else {\n" 
         << "\t\t\t\t (statement) \n" 
         << "\t\t\t\t}\n"
         << std::endl; 
         return 0; 
         }
         
