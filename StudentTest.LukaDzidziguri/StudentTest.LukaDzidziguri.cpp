#include <iostream>
#include <string>
int main()
{
    std::string name;
    double num1;
    double num2;
    double num3;
    double num4;
    double num5;
    double num6 = 500;
    double num7 = 100;

    std::cout << "enters students name\n";
    std::cin >> name;
    std::cout << "Enter test Score numbers\n";
    std::cout << "test score for syllabus quiz ranging from 0 to 100\n";
    std::cin >> num1;
    std::cout << "test score for chapter 1 quiz ranging from 0 to 100\n";
    std::cin >> num2;
    std::cout << "test score for chapter 2 quiz ranging from 0 to 100\n";
    std::cin >> num3;
    std::cout << "enter exam score ranging from 0 to 100\n";
    std::cin >> num4;
    std::cout << "enter practice exam score from 0 to 100 \n";
    std::cin >> num5;
    double addingsolve = num1 + num2 + num3 + num4 + num5;
    double averagescore = addingsolve / num6;
    double averagemulti = averagescore * num7;
    std::cout << name << " your Final score is " << addingsolve << " you're average score is " << averagemulti << std::endl;

    return 0;
}