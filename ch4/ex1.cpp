#include <iostream> 

int main() {
    int sample[10]; 
    
    for (int i = 0; i < 10; ++i) {
        sample[i] = i; 
        }
    
    for (int i = 0; i <= 10; ++i) {
        std::cout << "This is sample[" << i << "]: " << sample[i] << std::endl; 
        }
     return 0; 
  }
