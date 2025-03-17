#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include<string>
#include<cstdlib>
#include<iostream>

class Contact
{
    private:
        std::string name;
        std::string last_name;
        std::string nikname;
        std::string phone_number;
        std::string secret;
    public:
        void set_name(const std::string str);
        void set_last_name(const std::string str);
        void set_nikname(const std::string str);
        void set_phone_number(const std::string str);
        void set_secret(const std::string str);
        std::string pick_name();
};

class Phonebook
{
    private:
        Contact contact[8];
        int contact_len;
    public:
        Phonebook(int contact_len)
        {
            contact_len = 0;
        }
        void add();
        void show_contact(int i);
};

#endif 