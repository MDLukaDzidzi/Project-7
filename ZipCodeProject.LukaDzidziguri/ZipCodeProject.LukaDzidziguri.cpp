#include <iostream>

int main()
{
    std::string name;
    std::string phonenumber;
    std::string address;
    std::string state;
    std::string city;
    std::string zipcode;

    std::cout << "enter you're name\n";
    std::cin >> name;
    std::cout << "enter you're phone number\n";
    std::cin >> phonenumber;
    std::cout << "enter you're address\n";
    std::cin >> address;
    std::cout << "enter you're city\n";
    std::cin >> city;
    std::cout << "enter you're state\n";
    std::cin >> state;
    std::cout << "enter you're zip code\n";
    std::cin >> zipcode;

    std::cout << "this is the information provided\n";
    std::cout << "Name : " << name << std::endl;
    std::cout << "phone number : " << phonenumber << std::endl;
    std::cout << "address : " << address << std::endl;
    return 0;
}
