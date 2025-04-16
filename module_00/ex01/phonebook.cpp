#include "phonebook.hpp"


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
    std::cout <<"Nikname: ";
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

void print_contact(std::string str)
{
    int i;
    int f;
    int size;

    size = str.length();
    i = -1;
    while (i++, i < (10 - size))
        std::cout <<" ";
    // std::cout <<"size"<<size;
    f = 0;
    while (str[f], i < 10)
    {
        if (i == 9 && str[f + 1] != '\0')
        {
            std::cout << ".";
            break;
        }
        std::cout <<str[f];
        i++;
        f++;
    }
}
void Phonebook::show_contact()
{
    std::string str;
    int i;

    std::cout << "INDEX: ";
    std::getline(std::cin, str);
    if (!std::isdigit(str[0]))
        return ;
    i = std::atoi(str.c_str());
    if (i > contact_len || i <= 0)
        return;
    print_contact(str);
    std::cout <<"|";
    print_contact(contact[i - 1].pick_name());
    std::cout <<"|";
    print_contact(contact[i - 1].pick_last_name());
    std::cout <<"|";
    print_contact(contact[i - 1].pick_nikname());
    std::cout <<"\n";
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
    return (1);
}