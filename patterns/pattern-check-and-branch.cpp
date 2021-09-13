#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int a = 5;
        
    // check inputs are valid
    if ( a > 0 && a < 100 ) {
        
        // branch

        string result;        

        // range 1
        if ( 0 <= a && a <= 10 ) {
            
            result = a * 1;
    
        } 
        // range 2
        else if ( a > 10 && a < 20 ) {    

            result = a * 2;

        } 
        // range 3
        else if ( a > 30 && a < 40 ) {    

            result = a * 3;

        }
        // all other
        else {

            result = 0.0;

        }
        
        // print out result
        cout << "Result: " << result;    

    } else {
        
        cout << "a is not valid";

    }    
       
}