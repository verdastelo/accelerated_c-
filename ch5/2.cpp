/*
    This program computes the volume of a cube through a function
    other than main(). 
*/

#include <iostream> 

int volume_of_cube(int length = 0, int breadth = 0, int height = 0)
{
    std::cout << "The volume of the cube is: "
              << length * breadth * height
              << std::endl; 
              
    return 0; 
}

int main()
{
    std::cout << "What is the volume of Anita's box, whose " 
              << "dimensions are 14, 23 and 90? "
              << std::endl; 
    volume_of_cube(14, 23, 90); 
    return 0; 
}
