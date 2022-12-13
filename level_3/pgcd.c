#include <stdio.h>
#include <stdlib.h>

unsigned int pgcd(unsigned int n1, unsigned int n2)
{
    unsigned int nb;

    if (n1 > n2)
        nb = n1;
    else
        nb = n2;
    while (nb > 0)
    {
        if (n1 % nb == 0 && n2 % nb == 0)
            return (nb);
        nb--;
    }
    return (0);
}

int main(int argc, char  *argv[])
{
    if (argc == 3)
    {
        int n1 = atoi(argv[1]);
        int n2 = atoi(argv[2]);
        printf("%i", pgcd(n1, n2));
    }
    printf("\n");
    return (0);
}
