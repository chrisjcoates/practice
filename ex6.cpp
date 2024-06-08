#include <iostream>
#include <string>

// Grade Calculator

/*
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: 0-59
*/

std::string scoreGrade(int score)
{
    if (score > 90)
    {
        return "A";
    }else if (score >= 80 && score <= 89){
        return "B";
    }else if (score >= 70 && score <= 79){
        return "C";
    }else if (score >= 60 && score <= 69){
        return "D";
    }else{
        return "F";
    }
}

int main()
{
    int score;

    std::cout << "Enter your score : ";
    std::cin >> score;

    std::cout << score << std::endl;

    std::string grade = scoreGrade(score);

    std::cout << "Your grade is : " << grade << std::endl;

}