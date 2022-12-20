#include <stdlib.h>
#include <stdio.h>

int	num_len(int nbr)
{
	int	len = 0;

	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		len = num_len(nbr);

	str = malloc(len * sizeof(char) + 1);
	str[len--] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[len--] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (str);
}

int main(int argc, char **argv)
{
    printf("%s\n", ft_itoa(atoi(argv[1])));
    return (0);
}
