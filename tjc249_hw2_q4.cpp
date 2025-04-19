/*Question	4:
Write	a	program	that	reads	from	the	user	two	positive	integers,	and	prints	the	result	of	
when we add, subtract	multiply,	divide, div and	mod	them.
Your	program	should	interact	with	the	user	exactly	as	it	shows	in	the	following	example:	
Please enter two positive integers,	separated by	a	space:
14 4
14 + 4 = 18
14 - 4 = 10
14 * 4 = 56
14/4 = 3.5
14 mod 4 = 2
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double add, subtract, multiply, divide, mod;
    int int1, int2;

    cout << "Please enter two positive integers, separated by a space: ";
    cin >> int1 >> int2;

    add = int1 + int2;
    cout << int1 << " + " << int2 << " = " << add << endl;

    subtract = int1 - int2;
    cout << int1 << " - " << int2 << " = " << subtract << endl;

    multiply = int1 * int2;
    cout << int1 << " * " << int2 << " = " << multiply << endl;


   
    divide = double(int1)/ int2;
    cout << int1 << " / " << int2 << " = " << divide << endl;

    mod = int1 % int2;
    cout << int1 << " mod " << int2 << " = " << mod << endl;


    return 0;
}