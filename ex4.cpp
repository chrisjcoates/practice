#include <iostream>

// Even or Odd

int main ()
{
    int myInt;
    std::cout << "Enter and integer : ";
    std::cin >> myInt;

    int remainder = myInt % 2;

    if (remainder == 0)
    {
        std::cout << myInt << " is even.\n";
    }
    else
    {
        std::cout << myInt << " is odd.\n";
    }

}