#include <iostream>
using namespace std;

double toF(int temperature);

double toC(int temperature);

int main()
{
    cout << "Temperature Converter" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;

    int userInputTemp;
    cout << "1. Enter the temperature: ";
    cin >> userInputTemp;
    cout << "" << endl;

    int userInputTempType;
    do
    {
        cout << "2. Enter the type of temperature you want to convert:" << endl;
        cout << "------ 1. Celsius" << endl;
        cout << "------ 2. Fahrenheit" << endl;
        cin >> userInputTempType;
        switch (userInputTempType)
        {
            case 1:
                cout << "" << endl;
                cout << "The result is: " << toC(userInputTemp);
                break;
            case 2:
                cout << "" << endl;
                cout << "The result is: " << toF(userInputTemp);
                break;
            default:
                cout << "Error: Invalid input. PLease try again." << endl;
                cout << "" << endl;
                break;
        }
    } while (userInputTempType != 1 && userInputTempType != 2);
    
}

double toF(int temperatureC)
{
    return (temperatureC * (9.0 / 5.0) + 32);
}

double toC(int temperatureF)
{
    return ((temperatureF - 32) * (5.0 / 9.0));
}