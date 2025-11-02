#include <stdio.h>
                                                                                                                             int main()
{
    int n, i;
    int ecount = 0, ocount = 0;
    printf("Enter the number of scores: ");
    scanf("%d", &n);
    int scores[n];
    int even_array[n], odd_array[n];
    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (scores[i] % 2 == 0)
        {
            even_array[ecount] = scores[i];
            ecount++;
        }
        else
        {
            odd_array[ocount] = scores[i];
            ocount++;
        }
    }
    printf("\nEven scores are: ");
    if (ecount == 0)
        printf("None");
    else
    {
        for (i = 0; i < ecount; i++)
        {
            printf("%d ", even_array[i]);
        }
    }
    printf("\nOdd scores are: ");
    if (ocount == 0)
        printf("None");
    else
    {
        for (i = 0; i < ocount; i++)
        {
            printf("%d ", odd_array[i]);
        }
    }

    printf("\n");
    return 0;
}
