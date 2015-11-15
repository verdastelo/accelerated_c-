#include <iostream> 

int main() {
    for (int num = 4; num <= 10; num++) {
        for (int i = 2; i <= (num/2); i++) {
            if ((num % i) == 0) {
            }
            else {
                std::cout << num << " is prime. " << std::endl; 
                }
             }
        }
     return 0;
     }
