//Lab Assignment #1-P2
//Sümeyra Karsavran
//19.10.2021

#include <iostream>
using namespace std;

int main()
{
    float temperatureValue;

    cout << "Please enter a temperature value: ";
    cin >> temperatureValue;

    cout << "Conversion result: ";
    cout << temperatureValue << " Fahrenheit = " <<
    (temperatureValue - 32) * 5 / 9 << " Celsius " << "= " <<
    (temperatureValue - 32) * 5 / 9 + 273.15 << " Kelvin" << endl;
}
