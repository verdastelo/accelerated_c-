// Using an operator. 

#include <iostream> 
using namespace std; 

int main() 
{
    int length; // This declares a variable. 
    int width; // This declares another variable. 
    int area; // This does, too. 
    
    length = 'a'; // This assigns 97 to length. 
    width = 'b'; // This assigns 98 to width. 
    
    area = length * width; // This computes area. 
    
    cout << "This area is "; 
    cout << area << '\n'; // This displays 97*98
    
    return 0; 
}

