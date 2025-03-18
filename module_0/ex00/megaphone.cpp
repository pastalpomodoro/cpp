#include <iostream>
#include <string>

int main(int ac, char **av)
{
    int i;
    int f;


    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    f = 1;
    while (av[f])
    {
        i = 0;
        while (av[f][i])
        {
            if (av[f][i] <= 'z' && av[f][i] >= 'a')
                av[f][i] -=32;
            i++;
        }
        std::cout << av[f];
        f++;
    }
    std::cout << '\n';
    return 0;
}
