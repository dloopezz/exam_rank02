#include <stdlib.h>

int ft_range_size(int start, int end)
{
    if (start == end)
        return 1;
    else if (start < end)
        return end - start + 1;
    else
        return start - end + 1;
}

int     *ft_range(int start, int end)
{
    int size = ft_range_size(start, end);
    int *arr = malloc(sizeof(int) * size);

    if (arr == NULL)
        return NULL;
    // Populate the array with consecutive values starting at start and ending at end
    int i = 0;
    while (i < size)
    {
        arr[i] = start;
        if (start < end)
            start++;
        else
            start--;
        i++;
    }
    return arr;
}


#include <stdio.h>

int main()
{
    int *range1 = ft_range(1, 3); // returns [1, 2, 3]
    int *range2 = ft_range(-1, 2); // returns [-1, 0, 1, 2]
    int *range3 = ft_range(0, 0); // returns [0]
    int *range4 = ft_range(0, -3); // returns [0, -1, -2, -3]

    // Print the elements of the range arrays
    printf("range1: [");
    for (int i = 0; i < 3; i++)
    {
        printf("%d, ", range1[i]);
    }
    printf("\b\b]\n");

    printf("range2: [");
    for (int i = 0; i < 4; i++)
    {
        printf("%d, ", range2[i]);
    }
    printf("\b\b]\n");

    printf("range3: [%d]\n", range3[0]);

    printf("range4: [");
    for (int i = 0; i < 4; i++)
    {
        printf("%d, ", range4[i]);
    }
    printf("\b\b]\n");

    // Free the memory allocated by malloc
    free(range1);
    free(range2);
    free(range3);
    free(range4);

    return 0;
}

/* int main(int argc, char **argv)
{
    int *lst;
    int *head;
    lst = ft_range(atoi(argv[1]), atoi(argv[2]));
    head = lst;
    while (*lst)
    {
        printf("%i\n", *lst);
        lst++;
    }
    free(head);
    return (0);
} */