/* Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter, and prints its words in 
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the 
begin/end of the string.

If the number of parameters is different from 1, the program will display 
'\n'.

In the parameters that are going to be tested, there won't be any "additional" 
spaces (meaning that there won't be additionnal spaces at the beginning or at 
the end of the string, and words will always be separated by exactly one space).

Examples:

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$> */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *rev_wstr(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **words;

	while (str[i])
	{
		k = 0;
		while(str[i] != ' ')
		{
			words[j][k++] = str[i++];
		}
		i++;
		j++;
	}
	printf("%s    %s\n", words[0], words[1]);
	return (str);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);*/9-/
	return (0);
}
