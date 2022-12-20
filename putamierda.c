#include <stdio.h>

char	*ft_strrev(char *str)
{
	char rev[6];
	return (rev);
}

int main()
{
    char str[] = "hola";
    printf("%s", ft_strrev(str));
    return 0;
}

/* char	*ft_strrev(char *str)
{
	int	len;
	int	i;
	char	tmp;

	len = 0;
	i = 0;
	while (str[len])
		len++;
	len -= 1;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
} */