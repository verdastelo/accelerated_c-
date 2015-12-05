#include <iostream> 
#include <string> 

int main()
{
    // Ask for the person's name. 
    std::cout << "Please enter your first name: "; 
    
    // Read the name.
    std::string name; 
    std::cin >> name; 
    
    // Build the message that we intend to write.
    const std::string greeting = "Hello, " + name + "!"; 
    
    // We have to rewrite this part...
    
    // The number of blanks surrounding the greeting. 
    const int pad = 1; 
    
    // Total number of rows to write. 
    const int rows = pad * 2 + 3; 
    
    
    
    return 0;
}
