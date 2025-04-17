#include "main.hpp"

void replace(char **av, std::string str, std::string replace)
{
    std::ofstream outfile;
    int f;
    std::string tmp;

    outfile.open((std::string(av[1])+".replace").c_str());
    std::cout << (std::string(av[1])+".replace").c_str() << std::endl;
    for (int i = 0; str[i];)
    {
        tmp = &str[i];
        if (tmp.find(av[2]) == 0)
        {
            f = -1;
            while (f++, av[3][f])
                outfile << av[3][f];
            i += replace.length();
        }
        else
            outfile << str[i++];
    }
    outfile.close();
}
int main(int ac, char **av)
{
    std::ifstream file_r;
    char c;
    std::string str;

    if (ac != 4)
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
    replace(av, str, av[2]);
}
