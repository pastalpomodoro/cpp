#include "main.hpp"

int is_the_word(char **av, std::string str)
{
    int i;

    i = -1;
    while (i++, str[i] && str[i] != 9 && str[i] != 10 && str[i] != 11
        && str[i] != 12 && str[i] != 13 && str[i] != ' ')
    {
        if (av[2][i] != str[i])
            return (0);
    }
    if (av[2][i] != '\0')
        return (0);
    return (1);
}

void replace(char **av, std::string str)
{
    std::ofstream outfile;
    int f;

    outfile.open((std::string(av[1])+".replace").c_str());
    f = -1;
    while (f++, str[f])
    {
        if (is_the_word(av, &str[f]))
        {
            outfile << av[3];
            f += std::string(av[2]).length();
        }
        outfile << str[f];
    }
    outfile.close();
}
int main(int ac, char **av)
{
    std::ifstream file_r;
    char c;
    std::string str;

    if (ac < 2)
        return (0);
    file_r.open(av[1], std::ios::in);
    if (file_r.is_open())
    {
        while (file_r.get(c))
        {
            str += c;
        }
    }
    file_r.close();
    replace(av, str);
}
