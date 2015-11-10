#include <iostream> 

using namespace std; 

int main(void) {
    double distance; 
    double lightspeed; 
    double delay; 
    double delay_in_min; 
    double delay_bi_dir; // Delay in a bidirectional conversation. 
    
    distance = 34000000.0; 
    lightspeed = 186000.0; 
    
    delay = distance / lightspeed; 
    cout << "Time delay when talking to Mars: " << delay
    << " seconds.\n" << endl; 
    
    delay_in_min = delay / 60.0; 
    cout << "This is " << delay_in_min << " minutes." << endl; 
    
    delay_bi_dir = delay_in_min*2; 
    cout << "The delay in a bidirectional conversation is: " << 
    delay_bi_dir << " minutes." << endl; 
    
    return 0; 
    }
