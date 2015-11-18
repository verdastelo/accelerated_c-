/* 
    In the following fragment, after the break statement executes, what is displayed? 
    for (i = 0; i < 10; i++) {
        while (running) {
            if (x < y) break; 
            // ...
         }
         cout << "after while\n"; 
         
      }
      cout << "After for\n"; 
      */ 
    
#include <iostream> 

int main() {
    std::cout << "After while is displayed. " << std::endl; 
    return 0; 
    }
