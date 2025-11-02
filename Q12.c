#include <stdio.h>
int main()
{
    int n, i;
    int max, min;
    printf("Enter number of scores: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("\nScores entered:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nMaximum Score: %d", max);
    printf("\nMinimum Score: %d", min);
    return 0;
}
