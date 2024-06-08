#include <iostream>
#include <string>

// Greeting Program

int main()
{
    std::string name;
    int age;

    std::cout << "Enter your name : ";
    std::cin >> name;
    std::cout << "Enter your age : ";
    std::cin >> age;

    std::cout << "Hello " << name << "! Your are " << age << " years old.\n";

}