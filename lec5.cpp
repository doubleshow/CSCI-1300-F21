#include <iostream>
#include <cmath>

using namespace std;

int main(){

cout << "----------------" << endl;

//=================
// Variables
//=================

// Which is valid?
// Integer weight; // => good or bad?
// int weight; // => good or bad?
// weight int; // => good or bad?
// Int weight; // => good or bad?

// Are they all valid integers?
int weight2;
// weight2 = 3;
// weight2 = 0;
// weight2 = 1;
// weight2 = -1;
// weight2 = 169;
// weight2 = 1000;
// cout << weight2 << endl;
// => ?

// int weight3 = 'too heavy';
// cout << weight3 << endl;
// => ?

// int weight4 = 1000000000000000000000000000000000;
// cout << weight4 << endl;
// => ?

// int weight5 = 3.09;
// cout << weight5 << endl;
// => ?

// double weight6 = 3.09;
// cout << weight6 << endl;
// => ?

//=================
// Arithmetic
//=================

//
// How can we calculate BMI?
//
int weight = 70;
int height = 180;

double bmi; // = ?

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
// => ?

// how can we write to the n'th power?
int n = 20;
double balance_n; // = ?
// cout << balance_n << endl;


double bal0 = 1000;
double bal1 = bal0 + bal0 * (rate);
double bal2 = bal0 + 2 * bal0 * (rate);
double baln = bal0 + n * bal0 * (rate);
//cout << baln << endl;
// => ?

//=================
// Math Functions
//=================

// where are the documentation?
// http://cplusplus.com/reference/cmath

// pow()

// how can we write 2*2*2*2*2?
// cout << ? << endl;
// => ?

// exp()

// how can we write 'e to the (0.07 * t) power'? 
double t = 10;
double e = 2.71828;
// cout << exp(?) << endl;
// cout << pow(?, ?) << endl;
// => ?

// how can we compute the square root of 12345?
// cout << sqrt(12345) << endl;
// => ?

// how can we use PI?

// my_PI = 3.14159;
// => ?

// int my_PI = 3.14159;
// => ?

// double my_PI = 3.14159;
// => ?

// const double my_PI = 3.14159;
// => ?

// what is M_PI?
// cout << M_PI << endl;
// => ?

// how can we compute the square root of PI?
// cout << sqrt(M_PI) << endl;
// => ?

//=================
// Division
//=================

// cout << 7 / 3 << endl;
// => ?

// cout << 7.0 / 3 << endl;
// => ?

// cout << 7 / 3.0 << endl;
// => ?

// cout << 7 / 0 << endl;
// => ?

//=================
// Input / Output
//=================

int bottles;
// cout << "how many bottles of vokda did you drink?" << endl;
// cin >> bottles;
// cout << bottles << ' bottles' << endl;

cout << "----------------" << endl;
}