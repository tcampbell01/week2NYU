/*This program reads tw ointegers fro mthe user and prints their sum*/

#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int sum;

    cout << "Please enter two numbers separated by a space:"<<endl;
    cin>>num1>>num2;

    sum = num1 + num2;

    cout<<num1<<" + "<<num2<<" = "<<sum<<endl;

    return 0;

}