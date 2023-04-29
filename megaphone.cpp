#include <iostream>

void    ft_toUpper(char *s)
{
    int     i;

    i = 0;
    while(s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
        std::cout << s[i];
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;

    i = 1;
    if(argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < argc)
            ft_toUpper(argv[i++]);
        std::cout << std::endl;
    }
    return (0);
}
