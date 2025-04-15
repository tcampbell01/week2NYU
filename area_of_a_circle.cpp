#include <iostream>
#include <cmath>
using namespace std;

double radius, area;
// const double PI = 3.14;

int main() {
    cout<<"Please enter the radius:"<<endl;
    cin>>radius;

    area = M_PI * radius * radius;

    cout<<"The area of the circle is with radius of "<<radius<<" is "<<area<<endl;
    return 0;


}

//if we add include math, we can use M_PI as a built in constant 