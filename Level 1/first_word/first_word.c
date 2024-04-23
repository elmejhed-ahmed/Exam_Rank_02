#include <unistd.h>

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;

    if (ac == 2)
    {
        while (av[i][j] == ' ')
            j++;
        while (av[i][j] && av[i][j] != ' ')
        {
            write(1, &av[i][j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
    return 0;
}