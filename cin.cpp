/*
    This is an interactive program that
    computes the area of a rectangle.
*/

#include <iostream> 

using namespace std; 

int main() 

{
    int length, width; 
    
    cout << "Enter the length: "; 
    cin >> length; 
    cout << '\n'; 
    
    cout << "Enter the width: "; 
    cin >> width; 
    cout << '\n';
    
    cout << "The area is: "; 
    cout << length * width; 
    
    return 0; 
}
