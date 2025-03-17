#include "phonebook.hpp"
#include <iostream>

void Phonebook::add()
{
    std::string str;

    if (contact_len == 7)
        contact_len = 0;
    std::cout <<"Name: ";
    std::getline (std::cin, str);
    contact[contact_len].set_name(str);
    std::cout <<"Last name: ";
    std::getline (std::cin, str);
    contact[contact_len].set_last_name(str);
    std::cout <<"nikname: ";
    std::getline (std::cin, str);
    contact[contact_len].set_nikname(str);
    std::cout <<"Phone number: ";
    std::getline (std::cin, str);
    contact[contact_len].set_phone_number(str);
    std::cout <<"Bigghest secret: ";
    std::getline (std::cin, str);
    contact[contact_len].set_secret(str);
    contact_len++;
}

void Phonebook::show_contact()
{
    std::string str;
    int i;

    std::cout << "INDEX: ";
    std::getline(std::cin, str);
    i = std::atoi(str.c_str());
    std::cout << contact[i - 1].pick_name() << std::endl;
}

int main()
{
    Phonebook phone;
    std::string command;

    while (true)
    {
        std::cout << "\033[33m$>\033[0m";
        std::getline (std::cin, command);
        if (command == "EXIT")
            break ;
        else if (command == "ADD")
            phone.add();
        else if (command == "SEARCH")
        {
            phone.show_contact();
        }
    }
    std::cout <<"Biennnnn!!!!!"<< std::endl;
}