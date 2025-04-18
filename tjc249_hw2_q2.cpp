/*Write	a	program	that	asks	the	user	to	enter	an	amount	of	money	in	the	format	of	dollars	
and	remaining	cents.	The	program	should	calculate	and	print	the	minimum	number	of	coins	
(quarters,	dimes,	nickels and pennies) that are equivalent to the given	amount.
Hint:	In	order	to	find	the	minimum	number	of	coins,	first	find	the	maximum	number	of	
quarters	that	fit	in	the	given	amount	of	money,	then	find	the	maximum	number	of	dimes	
that fit in the	remaining	amount,	and so on.
Your	program	should	interact	with	the	user	exactly	as	it	shows	in	the	following	example:	
Please enter your	amount	in the	format	of dollars and cents separated by	a	space:
4	 37
4	dollars and 37 cents are:
17 quarters,	1	dimes,	0	nickels and	2	pennies*/

#include <iostream>
using namespace std;

int main() {

    int quarters;
    int dimes;
    int nickels;
    int pennies;
    int dollars;
    int cents;
    int total_cents;
    int remaining_cents;

    cout<<"Please enter your amount in the form of dollars and cents separated by a space: " <<endl;
    cin>> dollars;
    cin>>cents;

    total_cents = dollars*100 + cents;
    // cout<<"Total cents equals: " << total_cents << endl;

    quarters = total_cents / 25;
    // cout<< "Quarters equal: " << quarters;

    remaining_cents = total_cents - (quarters*25);
    // cout<< "Remaining cents is: " << remaining_cents;


    dimes = remaining_cents/10;
    // cout<< "Dimes equal: " << dimes << endl;
    remaining_cents = remaining_cents - (dimes*10);
    // cout<< "Remaining cents is: " << remaining_cents;

    nickels = remaining_cents/5;
    // cout<<"Nickels equal: " << nickels <<endl;
    remaining_cents = remaining_cents - (nickels*5);
    // cout<< "Remaining cents is: " << remaining_cents;

    pennies = remaining_cents;
    // cout<<"Pennies equal: " << pennies << endl;

    cout << dollars << " dollars and " << cents << " cents are: ";
    cout << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels and " << pennies << " pennies" << endl;

    return 0;


}