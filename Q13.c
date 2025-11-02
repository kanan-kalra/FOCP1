#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    if (n == 1)
    {
        printf("Peak element is: %d\n", a[0]);
        return 0;
    }
    if (a[0] >= a[1])
    {
        printf("Peak element is: %d\n", a[0]);
        return 0;
    }
    if (a[n - 1] >= a[n - 2])
    {
        printf("Peak element is: %d\n", a[n - 1]);
        return 0;
    }
    for (i = 1; i < n - 1; i++)
    {
        if (a[i] >= a[i - 1] && a[i] >= a[i + 1])
        {
            printf("Peak element is: %d\n", a[i]);
            return 0;
        }
    }
    printf("No peak element found.\n");
    return 0;
}

