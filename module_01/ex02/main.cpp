#include<string>
#include<cstdlib>
#include<iostream>

int main(void)
{
    std::string str = "HIS THIS A BRAIN"; 
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    std::cout << &str << std::endl;
    std::cout << &stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << "" << std::endl;
    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}