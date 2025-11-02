#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number of scores: ");
    scanf("%d", &a);
    int scores[a];
    int i, found = 0;
    printf("Enter %d scores:\n", a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &scores[i]);
    }
    for (i = 0; i < a; i++)
    {
        if (scores[i] == 99)
        {
            printf("The first occurrence of Score 99 is at position %d.\n", i + 1);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("Score 99 was not found in the list.\n");
    }

    return 0;
}
