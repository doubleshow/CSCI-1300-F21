#include <iostream>
#include <string>
using namespace std;

int main() {
    
    char a;        
    string result;    

    a = 'A';

    switch (a) {
        
        case 'A':
        case 'B':        
        result = "A/B";
        break;
            
        case 'C':
        case 'D':
        result = "C/D";
        break;
        
        case 'E':
        case 'F':        
        result = "E/F";
        break;
                
        default:
        result = "n/a";
    }
    
    cout << result;
       
}