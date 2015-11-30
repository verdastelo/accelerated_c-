/*
    Showcases the use of an independent reference.
*/

#include <iostream> 

int main()
{
    int j = 10, k = 11; 
    int &i = j; 
    std::cout << j << " " << i << std::endl;
    i = k; // This statement assigns the value of k to j. 
    std::cout << j << std::endl;
    return 0;
}

    
