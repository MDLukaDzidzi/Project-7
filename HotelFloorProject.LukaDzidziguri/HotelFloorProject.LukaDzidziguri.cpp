#include <iostream>

int main()
{
    std::string hotel;
    std::string floors;
    int choice = 0;
    std::string rooms[] = { "single room","double room","king room","suite room" };
    int num1 = 6;
    int floor = 6;
    double num2;
    double num3;
    double num4;
    double num5;
    double num6 = 60;
    double num7 = 75;
    double num8 = 100;
    double num9 = 150;

    std::cout << "Enter the location of this hotel\n";
    std::cin >> hotel;
    std::cout << "Enter the total numbers of floors of the hotel\n";
    std::cin >> num1;

    for (int i = 0; i < 4; ++i) {
        std::cout << i + 1 << ". " << rooms[i] << std::endl;

    }

    if (num1 > 6)
    {
        std::cout << "It can't be less then 5 floors!";


    }

    do
    {
        std::cout << "pick an room";
        std::cin >> choice;

    } while (choice < 1 || choice > 4);

    std::cout << "how many single rooms are occupied?";
    std::cin >> num2;
    std::cout << "how many double rooms are occupied?";
    std::cin >> num3;
    std::cout << "how many king rooms are occupied?";
    std::cin >> num4;
    std::cout << "how many suite rooms are occupied?";
    std::cin >> num5;


    double result = num2 * num6;
    double number = num3 * num7;
    double something = num4 * num8;
    double more = num5 * num9;

    double add = more + something + number + result;

    std::cout << "the total income of the hotel is : " << add << std::endl;

    return 0;
}




















/*
 * Class: CMSC140 CRN
 * Instructor:
 * Project<number>
 * Description: (Give a brief description for Project)
 * Due Date:
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Luka Dzidziguri
*/
