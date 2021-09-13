#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int a = 5;
                
    // branch 
    
    // ranges are overllaping
    // they must be ordered from the "smallest" to the "largest"    

    string result;        

    // range 1 (smallest or most restrictive)
    if ( a > 30 ) {
        
        result = a * 1;

    } 
    // range 2
    else if ( a > 20 ) {    

        result = a * 2;

    } 
    // range 3 (largest or least restrictive)
    else if ( a > 10 ) {    

        result = a * 3;

    }
    // all other
    else {

        result = 0.0;

    }
    
    // print out result
    cout << "Result: " << result;    
       
}