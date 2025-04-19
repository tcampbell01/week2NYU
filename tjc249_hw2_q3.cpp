/*Suppose	John	and	Bill	worked	for	some	time	and	we	want	to	calculate	the	total	time	both	
of	them	worked.	Write	a	program	that	reads	number	of	days,	hours,	minutes	each	of	them	
worked, and prints the total	time	both of them worked together as days, hours,	minutes.
Hint: Try to adapt the	elementary	method	for addition of	numbers	to this use.
Your	program	should	interact	with	the	user	exactly	as	it	shows	in	the	following	example:	
Please enter the	number	of days John has worked: 2
Please	enter	the	number	of	hours	John	has	worked:	12
Please enter the	number	of	minutes	John has worked: 15
Please	enter	the	number	of	days	Bill	has	worked:	3	
Please	enter	the	number	of	hours	Bill	has	worked:	15
Please enter the	number	of	minutes	Bill has worked: 20
The total	time	both of them worked together is:	6	days,	3	hours and 35	minutes.*/

#include <iostream>
using namespace std;

int main() {

    int john_days, john_hours, john_minutes;
    int bill_days, bill_hours, bill_minutes;
    int total_days, total_hours, total_minutes;

    cout<<"Please enter the number of days John has worked: "<<endl;
    cin>> john_days;

    cout<<"Please enter the number of hours John has worked: "<<endl;
    cin>> john_hours;

    cout<<"Please enter the number of minutes John has worked: " << endl;
    cin>> john_minutes;

    cout<<"Please enter the number of days Bill has worked: " << endl;
    cin >> bill_days;

    cout << "Please enter the number of hours Bill has worked: " << endl;
    cin >> bill_hours;

    cout << "Please enter the number of minutes Bill has worked: " << endl;
    cin >> bill_minutes;

    total_minutes = (john_days * 1440) + (bill_days * 1440) + (john_hours * 60) + (bill_hours * 60) + john_minutes + bill_minutes;

    total_days = total_minutes/1440;
    total_minutes = total_minutes - (total_days * 1440);


    total_hours = total_minutes / 60;
    total_minutes = total_minutes - (total_hours * 60);


    cout << "The total time both of them worked together is: " << total_days << " days, " << total_hours << " hours and " << total_minutes << " minutes.";

    return 0;

}