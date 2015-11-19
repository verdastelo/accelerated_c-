/* 
    This program computes average and finds 
    the largest and smallest numbers in a set
    of values. 
*/ 

#include <iostream> 

int main() {
    int i = 0; 
    int average = 0; 
    int min_value = 0; 
    int max_value = 0; 
    
    int numbers[10]; 
    
    numbers[0] = 10; 
    numbers[1] = 10; 
    numbers[2] = 75; 
    numbers[3] = 0; 
    numbers[4] = 1; 
    numbers[5] = 56; 
    numbers[6] = 100; 
    numbers[7] = 12; 
    numbers[8] = -19; 
    numbers[9] = 88; 
    
    for (int i = 0; i < 10; i++) {
        average += numbers[i]; 
        }
    
    average /= 10; 
    
    std::cout << "Average is " << average << std::endl; 
    
    min_value = max_value = numbers[0];
    
    for (int i = 1; i < 10; i++) {
        if (numbers[i] < min_value) {
            min_value = numbers[i]; 
            }
        if (numbers[i] > max_value) {
            max_value = numbers[i]; 
            }
         }
         
     std::cout << "Minimum value is " << min_value << std::endl; 
     std::cout << "Maximum value is " << max_value << std::endl; 
     
     return 0; 
     }
