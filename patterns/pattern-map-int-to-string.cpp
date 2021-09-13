#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int a;        
    string result;    

    a = 1;

    switch (a) {
        
        case 1:
        case 2:        
        result = "one/two";
        break;
            
        case 3:
        case 4:
        result = "three/four";
        break;
        
        case 5:
        case 6:        
        result = "five/six";
        break;
                
        default:
        result = "n/a";
    }
    
    cout << result;
       
}