#include <stdio.h>
int main()
{
    int n, i, j;
    int count = 0;
    int isPrime;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nArray elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] <= 1)
        {
            continue;
        }

        isPrime = 1;
        for (j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            count++;
        }
    }
    printf("\n\nNumber of prime numbers in the array: %d\n", count);
    return 0;
}
