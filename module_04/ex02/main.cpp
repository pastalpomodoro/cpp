#include "global.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    std::cout << "\n";
    const Animal* A[10];
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            A[i] = new Dog();
        else
            A[i] = new Cat();
        std::cout << "\n";
    }
    for (int i = 0; i < 10; i++){
        delete A[i];
        std::cout << "\n";}
    return 0;
}