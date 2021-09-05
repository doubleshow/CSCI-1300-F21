#include <iostream>
#include <cmath>

using namespace std;

#include <string>

int main(){
    cout << "----------------" << endl;

    int answer1;
    cout << answer1 << endl;
    // => 1

    int answer2;
    cout << answer2 << endl;
    // => 195506213

    // The output is unpredictable. It prints whatever value that happens to be 
    // in the memory location allocated for the variable. 
    // The program does compile. It runs and does not crash.

    //=========
    // Strings
    //=========

    string response;
    // cout << response << endl;
    // => '' emprt string

    // string name = "Harry";
    // cout << name << endl;
    // => Harry

    // how can we concatenate strings?
    string fname = "Harry";
    string lname = "Potter";
    string name = fname + lname;
    // cout << name << endl;
    // => HarryPotter
    
    // how can we add a space between first and last name?
    // name = fname + " " + lname; //got a space
    // cout << name << endl;
    // => Harry Potter

    // how can we take string inputs?
    // cout << "Please enter your name: ";
    // string fname, lname;
    // cin >> fname >> lname;
    // cout << "Hello! " << fname << " " << lname << endl;
    // => Hello! Tom Yeh

    // how can we use getline()?
    // string myname;    
    // getline(cin, myname);
    // => myname = Tom Yeh

    // what is the length of a string?
    // cout << myname.length() << endl;
    // => 7

    // how can we get a character from a string?
    string myname = "Taylor Swift";
    // cout << myname[0] << endl;
    // => T
    
    // cout << myname[1] << endl;
    // => a
    
    // cout << myname[20] << endl;
    // => 0 
    // The offset 20 exceeds the length of the string. It prints a unpredictable value.

    cout << myname[10000] << endl;
    // => segmentation fault! 
    // The offset 10000 far-exceeds the length of the string, as well as the program size. It causes a crash.

    // how can we get a part of a string?
    // cout << myname.substr(0, 2);
    // => ? (Ta or Tay)

    // how can we get 'Taylor'?
    // cout << myname.substr(?, ?);    

    // how can we get 'Swift'?
    // cout << myname.substr(?, ?);
    
    //=========
    // ASCII
    //=========

    char c;
    c = 70;
    // cout << c << endl;
    // => ?

    // what is 'A'?    
    // c = ?
    // cout << c << endl;

    // c = (70 + 256);
    // cout << c << endl;
    // => ?

    //=========
    // BOOLEAN
    //=========
    bool failed = false;
    // cout << failed << endl;
    // => ?

    int x = -3;
    bool isNegative = (x < 0);
    // cout << isNegative << endl;
    // => ?

    cout << "----------------" << endl;

}