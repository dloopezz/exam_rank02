#include <stdlib.h>
#include <stdio.h>

char        **ft_split(char *str)
{
    int     i;
    int     j;
    int     k;
    char    **split;

    i = 0;
    k = 0;
    if (!(split = (char **)malloc(sizeof(char *) * 256)))
        return (NULL);
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    while (str[i])
    {
        j = 0;
        if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
            return (NULL);
        while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
            split[k][j++] = str[i++];
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        split[k][j] = '\0';
        k++;
    }
    split[k] = NULL;
    return (split);
}


#include <stdlib.h>
#include <stdio.h>
/* Creating a function that takes a string as an argument and returns a pointer to
a pointer of a char. */
char        **ft_split(char *str)
{
    int     i;
    int     j;
    int     k;
    char    **split;
    i = 0;
    k = 0;
    /* This is allocating memory for the array of pointers. */
    if (!(split = (char **)malloc(sizeof(char *) * 256)))
        return (NULL);
    /* This is skipping the spaces, tabs and new lines. */
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i += 1;
    /* Checking if the string is not empty. */
    while (str[i])
    {
        j = 0;
        /* Allocating memory for the array of pointers. */
        if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
            return (NULL);
        /* This is checking if the string is not empty. */
        while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
            /* Assigning the value of str[i] to split[k][j] and then incrementing both i and
            j. */
            split[k][j++] = str[i++];
        /* This is skipping the spaces, tabs and new lines. */
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i += 1;
        /* Assigning the value of '\0' to split[k][j]. */
        split[k][j] = '\0';
        k += 1;
    }
    /* Assigning the value of NULL to split[k]. */
    split[k] = NULL;
    return (split);
}