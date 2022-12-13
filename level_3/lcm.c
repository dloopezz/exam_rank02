unsigned int    lcm(unsigned int n1, unsigned int n2)
{
    unsigned int nb;

    if (n1 == 0 || n2 == 0)
        return (0);
    if (n1 > n2)
        nb = n1;
    else
        nb = n2;
    while (nb)
    {
        if (nb % n1 == 0 && nb % n2 == 0)
            return (nb);
        nb++;
    }
    return (0);
}

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	unsigned int a = atoi(argv[1]);
	unsigned int b = atoi(argv[2]);
	printf("%d\n", lcm(a,b));
}