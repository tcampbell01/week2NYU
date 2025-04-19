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

    int quarters, dimes, nickels, pennies, dollars, cents, total_cents;
  
    cout<<"Please enter your amount in the form of dollars and cents separated by a space: " <<endl;
    cin>> dollars;
    cin>>cents;

    total_cents = dollars*100 + cents;
    
    quarters = total_cents / 25;
    total_cents = total_cents - (quarters*25);
   
    dimes = total_cents/10;
    total_cents = total_cents - (dimes*10);
    

    nickels = total_cents/5;
    total_cents = total_cents - (nickels*5);
    
    pennies = total_cents;
   
    cout << dollars << " dollars and " << cents << " cents are: ";
    cout << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels and " << pennies << " pennies" << endl;

    return 0;


}