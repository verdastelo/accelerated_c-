#include <iostream> 

void cube (int *n, int num) 
{
    while (num) {
        *n = *n * *n * *n; 
        num--; 
        n++; 
        }
 }
 
 int main() 
 { 
    int num[10]; 
    
    for (int i = 0; i < 10; i++) {
        num[i] = (i + 1); 
        }
        
    std::cout << "Original content: " << std::endl; 
    
    for (int i = 0; i < 10; i++) {
        std::cout << num[i] << ' '; 
        std::cout << std::endl; 
        }
    
    cube (num, 10);
    
    std::cout << "Altered content: " << std::endl; 
    
    for (int i = 0; i < 10; i++) {
        std::cout << num[i] << ' '; 
        std::cout << std::endl; 
        }
        
    return 0; 
}
