#include <unistd.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	char *str;

	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][j])
			{
				str[j] = argv[2][j];
				j++;
			}
			i++;
		}
		argv[2][j] = '\0';
		if (str == argv[2])
			write (1, "1", 1);
		else 
			write (1, "0", 1);
	}

	write (1, "\n", 1);
	return (0);
}
