#include <iostream>
using namespace std;

const int DAYS_IN_A_WEEK = 7;

int main() {
    int daysTraveled;
    int fullWeeks;
    int remainingDays;

    cout<<"Please enter number of days you traveled:"<<endl;
    cin>>daysTraveled;

    fullWeeks = daysTraveled / DAYS_IN_A_WEEK;
    remainingDays = daysTraveled % DAYS_IN_A_WEEK;

    cout<<"You traveled "<<fullWeeks<<" weeks and "<<remainingDays<<" days."<<endl;

    return 0;
}