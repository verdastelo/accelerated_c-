// Спросить как зовут человека.  

#include <iostream> 
#include <string> 

int main()
{
    // Спросить имя 
    std::cout << "Как вас зовут? (Пишите только имя) "; 
    
    // Читать имя 
    std::string imja; // Defines name. 
    std::cin >> imja; // Reads into 
    
    // Писать 
    std::cout << "Привет, " << imja << "!" << std::endl; 
    return 0; 
}
