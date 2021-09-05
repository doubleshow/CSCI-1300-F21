#include <iostream>
#include <cmath>

using namespace std;

int main(){

cout << "----------------" << endl;

//=================
// Variables
//=================

// Which is valid?
// Integer weight;
int weight; // => only this one is good
// weight int;
// Int weight;

// Are they all valid integers?
int weight2;
// weight2 = 3;
// weight2 = 0;
// weight2 = 1;
// weight2 = -1;
// weight2 = 169;
// weight2 = 1000;
// cout << weight2 << endl;
// => They all are!

// int weight3 = 'too heavy';
// cout << weight3 << endl;
// => warning: multi-character character constant [-Wmultichar]
// => 1700886137

// int weight4 = 1000000000000000000000000000000000;
// cout << weight4 << endl;
// => error: integer literal is too large to be represented in any integer type

// int weight5 = 3.09;
// cout << weight5 << endl;
// => 3

// double weight6 = 3.09;
// cout << weight6 << endl;
// => 3.09

//=================
// Arithmetic
//=================

//
// How can we calculate BMI?
//
int height = 10;

double bmi = weight / height * 1000;

// How can we calculate compound interest?

double balance_0 = 1000;
double rate = 0.05;

// Year 1
double balance_1 = balance_0 * (1 + rate);

// Year 2

double balance_2 = balance_0 * (1 + rate) * (1 + rate);

// Year 3

double balance_3 = balance_0 * (1 + rate) * (1 + rate) * (1 + rate);

// Year N

// double balance_n = balance_0 * (1 + rate) ^ n;
// => c++ does not understand ^

// how can we write to the n'th power?
int n = 20;
double balance_n = balance_0 * pow((1 + rate), n);
// cout << balance_n << endl;


double bal0 = 1000;
double bal1 = bal0 + bal0 * (rate);
double bal2 = bal0 + 2 * bal0 * (rate);
double baln = bal0 + n * bal0 * (rate);
//cout << baln << endl;
// => 2000

//=================
// Math Functions
//=================

// where are the documentation?
// http://cplusplus.com/reference/cmath

// pow()

// how can we write 2*2*2*2*2?
// cout << pow(2, 5) << endl;
// => 32

// exp()

// how can we write 'e to the (0.07 * t) power'? 
double t = 10;
double e = 2.71828;
// cout << exp(0.07 * t) << endl;
// cout << pow(e, 0.07*t) << endl;
// => 2.01375

// how can we compute the square root of 12345?
// cout << sqrt(12345) << endl;
// => 111.108

// how can we use PI?

// my_PI = 3.14159;
// => bad, mssing type declaration

// int my_PI = 3.14159;
// => bad, wrong type, rounded to integer

// double my_PI = 3.14159;
// => good

// const double my_PI = 3.14159;
// => good

// what is M_PI?
// cout << M_PI << endl;
// => 3.14159

// how can we compute the square root of PI?
// cout << sqrt(M_PI) << endl;
// => 1.77245

//=================
// Division
//=================

// cout << 7 / 3 << endl;
// => 2

// cout << 7.0 / 3 << endl;
// => 2.33333

// cout << 7 / 3.0 << endl;
// => 2.33333

// cout << 7 / 0 << endl;
// => 73896 (undefined)

//=================
// Input / Output
//=================

int bottles;
// cout << "how many bottles of vokda did you drink?" << endl;
// cin >> bottles;
// cout << bottles << ' bottles' << endl;

cout << "----------------" << endl;
}