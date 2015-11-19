/* 
    Create a 2-D array. 
    Load it with numbers from 1 to 12. 
*/

#include <iostream> 

int main() {
    int x = 0; 
    int y = 0; 
    
    int twoD_mesh[3][4];
    
    for (x = 0; x < 3; ++x) {
        for (y = 0; y < 4; ++y) {
            twoD_mesh[x][y] = (x*4) + y + 1; 
            std::cout << twoD_mesh[x][y] << ' '; 
            }
        std::cout << '\n'; 
    }
    
    return 0; 
    }
