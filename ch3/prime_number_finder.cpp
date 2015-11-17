// This program figures out if a given number is prime. 
#include <iostream> 

int num = 0; 
int count = 0; 

int main() {
    // Prompt user to enter a number (num) and store it. 
    std::cout << "Enter your number." << std::endl; 
    std::cin >> num; 
    
    // int divide by 2. Perfect division shows num is not prime. 
    if ((num % 2) == 0) {
        std::cout << num << " is not prime." << std::endl; 
        }
    // else occurs when num can be prime. 
    else {
    // for divides num by all numbers 3 <= i <= (num/2) 
        for (int i = 3; i <= (num/2); i++) {
    // Perfect division adds 1 to count. 
            if ((num % i) == 0) {
                count++;
                }
            }
    // Absence of perfect division shows num is prime. count remains 0.
        if (count == 0) {
            std::cout << num << " is prime. " << std::endl; 
        }
        else {
            std::cout << num << " is not prime." << std::endl; 
        }
     }
     return 0;
     }
