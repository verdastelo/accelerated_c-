/*
    Is the following fragment valid? 
        for (int i = 0; i < num; i++) 
            sum += i; 
        count = i; 
        */
        
#include <iostream> 

int main() {
    std::cout << "\t Yes, the statement is valid if num, sum and count are declared integers elsewhere in the program. "
    << std::endl; 
    std::cout << "EDIT. No, because i's scope doesn't extend to count = i;." << std::endl; 
    return 0; 
    }
