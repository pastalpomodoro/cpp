#include "phonebook.hpp"

void Contact::set_name(const std::string str)
{
    name = str;
}
void Contact::set_last_name(const std::string str)
{
    last_name = str;
}
void Contact::set_nikname(const std::string str)
{
    nikname = str;
}
void Contact::set_phone_number(const std::string str)
{
    phone_number = str;
}
void Contact::set_secret(const std::string str)
{
    secret = str;
}
std::string Contact::pick_name()
{
    return(name);
}
std::string Contact::pick_last_name()
{
    return(last_name);
}
std::string Contact::pick_nikname()
{
    return(nikname);
}