#include <iostream>

// Basic Arithmetic Operations

int main()
{
    int firstNumber;
    int secondNumber;
    
    std::cout << "Enter the first number : ";
    std::cin >> firstNumber;
    std::cout << "Enter the second number : ";
    std::cin >> secondNumber;

    int sum = firstNumber + secondNumber;

    int difference;
    if (firstNumber > secondNumber)
    {
        difference = firstNumber - secondNumber;
    }
    else
    {
        difference = secondNumber - firstNumber;
    }

    int product = firstNumber * secondNumber;

    int quotient = firstNumber / secondNumber;

    std::cout << "Sum : " << sum << std::endl;
    std::cout << "Difference : " << difference << std::endl;
    std::cout << "Product : " << product << std::endl;
    std::cout << "Quotient : " << quotient << std::endl;
}