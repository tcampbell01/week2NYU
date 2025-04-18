#include <iostream>
using namespace std;

int main() {

    double celsius_input;
    double fahrenheit_input;
    double celsius;
    double fahrenheit;

    cout<<"Give me a temperature in fahrenheit:"<<endl;
    cin>>fahrenheit_input;

    cout<<"Give me a temperature in celsius:"<<endl;
    cin>>celsius_input;

    celsius = (fahrenheit_input - 32) * 5.0/9.0; 
    fahrenheit = (celsius_input * 9.0/5.0) + 32;

    cout<<"Your temperature in fahrenheit is "<< fahrenheit<<endl;
    cout<<"Your temperature in celsius is "<< celsius<<endl;

    return 0;


}