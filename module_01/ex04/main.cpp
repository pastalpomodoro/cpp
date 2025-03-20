#include "main.hpp"

int main(int ac, char **av)
{
    std::ifstream file;
    std::string ligne;

    if (ac != 2)
        return (1);
    file.open(av[1], std::ios::in);
    if (file.is_open())
    {
        while (std::getline(file, ligne))
            std::cout << ligne << std::endl;
        file.close();
    }
}