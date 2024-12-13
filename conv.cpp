#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius)
{
    return (celsius * 9.0 / 5.0) + 32;
}

double fahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5.0 / 9.0;
}

double celsiusToKelvin(double celsius)
{
    return celsius + 273.15;
}

double kelvinToCelsius(double kelvin)
{
    return kelvin - 273.15;
}

double fahrenheitToKelvin(double fahrenheit)
{
    return (fahrenheit - 32) * 5.0 / 9.0 + 273.15;
}

double kelvinToFahrenheit(double kelvin)
{
    return (kelvin - 273.15) * 9.0 / 5.0 + 32;
}

int main()
{
    int choice;
    double temperature, convertedTemperature;

    cout << "Temperature Converter\n";
    cout << "Select the conversion you want to perform:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Celsius to Kelvin\n";
    cout << "4. Kelvin to Celsius\n";
    cout << "5. Fahrenheit to Kelvin\n";
    cout << "6. Kelvin to Fahrenheit\n";
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    cout << "Enter the temperature: ";
    cin >> temperature;

    switch (choice)
    {
    case 1:
        convertedTemperature = celsiusToFahrenheit(temperature);
        cout << temperature << " Celsius is equal to " << convertedTemperature << " Fahrenheit\n";
        break;
    case 2:
        convertedTemperature = fahrenheitToCelsius(temperature);
        cout << temperature << " Fahrenheit is equal to " << convertedTemperature << " Celsius\n";
        break;
    case 3:
        convertedTemperature = celsiusToKelvin(temperature);
        cout << temperature << " Celsius is equal to " << convertedTemperature << " Kelvin\n";
        break;
    case 4:
        convertedTemperature = kelvinToCelsius(temperature);
        cout << temperature << " Kelvin is equal to " << convertedTemperature << " Celsius\n";
        break;
    case 5:
        convertedTemperature = fahrenheitToKelvin(temperature);
        cout << temperature << " Fahrenheit is equal to " << convertedTemperature << " Kelvin\n";
        break;
    case 6:
        convertedTemperature = kelvinToFahrenheit(temperature);
        cout << temperature << " Kelvin is equal to " << convertedTemperature << " Fahrenheit\n";
        break;
    default:
        cout << "Invalid choice!" << endl;
        break;
    }

    return 0;
}
