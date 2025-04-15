#include <iostream>
using namespace std;

double radius, area;
double pi = 3.14;

int main() {
    cout<<"Please enter the radius:"<<endl;
    cin>>radius;

    area = pi * radius * radius;

    cout<<"The area of the circle is with radius of "<<radius<<" is "<<area<<endl;
    return 0;


}