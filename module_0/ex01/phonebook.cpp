#include "phonebook.hpp"
#include <iostream>

void Phonebook::add()
{
    std::string str;

    if (contact_len == 7)
        contact_len = 0;
    std::cout <<"Name: " << std::endl;
    std::getline (std::cin, str);
    contact[contact_len].set_name(str);
    std::cout <<"Last name: " << std::endl;
    std::getline (std::cin, str);
    contact[contact_len].set_last_name(str);
    std::cout <<"nikname: " << std::endl;
    std::getline (std::cin, str);
    contact[contact_len].set_nikname(str);
    std::cout <<"Phone number: " << std::endl;
    std::getline (std::cin, str);
    contact[contact_len].set_phone_number(str);
    std::cout <<"Bigghest secret: " << std::endl;
    std::getline (std::cin, str);
    contact[contact_len].set_secret(str);
    contact_len++;
}

void Phonebook::show_contact(int i)
{
    if (i > 8)
        return ;
    std::cout << contact[i - 1].pick_name() << std::endl;
}

int main()
{
    Phonebook phone(0);
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
            phone.show_contact(atoi(&command[7]));
    }
    std::cout <<"Biennnnn!!!!!"<< std::endl;
}