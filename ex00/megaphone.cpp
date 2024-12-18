#include <iostream>

int main(int ac, char *av[])
{
    if (ac <= 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return 0;
    }
    for (int i = 1; i < ac; i++)
    {
        for (int j = 0; av[i][j] != '\0'; j++)
            std::cout << (char)std::toupper(av[i][j]);
        std::cout << " ";
    }
    std::cout << std::endl;
}
