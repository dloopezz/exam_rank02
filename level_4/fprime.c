#include <stdio.h>
#include <stdlib.h>

int isprime(int nb)
{
    int i = 2;

    while (i <= nb/2)
    {
        if (nb % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

void fprime(int nb)
{
    int i = 2;
    int flag_first = 1;

    while (i <= nb)
    {
        if (isprime(i) && nb % i == 0)
        {
            if (flag_first == 1)
                printf("%i", i);
            else
                printf("*%i", i);
            flag_first = 0;
            nb /= i;
        }
        else
            i++;
    }

}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int nb = atoi(argv[1]);
        fprime(nb);
    }
    printf("\n");
    return (0);
}
