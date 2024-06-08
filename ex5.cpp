#include <iostream>
#include <string>

// Simple Calculator

int twoNmberCalculator(int num1, int num2, std::string opp)
{
    if (opp == "+")
    {
        return num1 + num2;
    }else if (opp == "-")
    {
        return num1 - num2;
    }
    else if (opp == "*")
    {
        return num1 * num2;
    }
    else if (opp == "/")
    {
        return num1 / num2;
    }
    else
    {
        std::cout << "Operator not reconised\n";
        return 0;
    }
}


int main()
{
    int firstNumber;
    int secondNumber;
    std::string userOpperator;

    std::cout << "Enter first number : ";
    std::cin >> firstNumber;
    std::cout << "Enter an operator (+, -, *, /) : ";
    std::cin >> userOpperator;
    std::cout << "Enter second number : ";
    std::cin >> secondNumber;

    int result = twoNmberCalculator(firstNumber, secondNumber, userOpperator);

    if (result > 0)
    {
        std::cout << "Result : " << result << std::endl;
    }
}