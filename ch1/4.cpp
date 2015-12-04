/*
    Are the following statements valid? Why or why not? 
    const std::string exlam = "!"; 
    const std::string message = "Hello" + ", world" + exlam; 
*/

#include <iostream> 
#include <string> 

int main()
{
    const std::string exlam = "!"; 
    const std::string message = "Hello" + ", world" + exlam; 
    std::cout << message << std::endl;
    return 0;
}

/*
    This time, the program does not run. 
    Need to reread the chapter to find out why it happens. 
*/ 
