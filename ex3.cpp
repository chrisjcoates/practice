#include <iostream>

int celsiusToFahrenheit(int cel)
{
    return (cel * 1.8) + 32;
}

//  Temperature Conversion

int main()
{
    int celsius;
    int fahrenheit;

    std::cout << "Enter temperature in Celsius : ";
    std::cin >> celsius;
    
    fahrenheit = celsiusToFahrenheit(celsius);

    std::cout << "Temperature in Fahrenheit : " << fahrenheit << std::endl;
}