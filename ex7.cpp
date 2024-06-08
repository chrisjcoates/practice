#include <iostream>
#include <iomanip>

double calculateBMI(double weight, double height)
{
    double BMI = weight / (height * height);

    return BMI;
}

std::string weightCategory(double BMI)
{
    if (BMI < 18.5)
    {
        return "Underweight";
    }else if (BMI >= 18.5 && BMI <= 24.9){
        return "Normal weight";
    }else if (BMI >= 25 && BMI <= 29.9){
        return "Overweight";
    }else{
        return "Obesity";
    }
}

int main()
{
    double weight;
    double height;

    std::cout << "Enter your weight in kg : ";
    std::cin >> weight;
    std::cout << "Enter your height in meters : ";
    std::cin >> height;

    double calcBMI = calculateBMI(weight, height);
    std::string weightCat = weightCategory(calcBMI);

    std::cout << " Your BMI is " << std::fixed << std::setprecision(2) << calcBMI << ", which is considered " << weightCat << " weight.\n";
}