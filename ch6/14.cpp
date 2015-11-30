/*
    Create two versions of min(), that work on chars and ints.
*/

#include <iostream> 

int min (int a, int b)
{
    if (a < b) {
        return a; 
        }
    else 
        return b; 
}

char min (char a, char b)
{
    if (tolower(a) < tolower(b)) {
        return a;
        }
    else 
        return b; 
}

int *min (int *a, int *b) 
{
    if (*a < *b) {
        return a; 
        }
     else 
        return b; 
}

int main()
{
    int i = 10, j = 22; 
    std::cout << "min('X', 'a'): " << min('X', 'a') << std::endl;
    std::cout << "min (9, 3): " << min (9, 3) << std::endl;
    std::cout << "*min (&i, &j): " << *min (&i, &j) << std::endl;
    return 0;
}
