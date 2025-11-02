#include <stdio.h>
int main()
{
    int n, i, position, choice;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nOriginal array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\nWhere do you want to delete the element from?\n");
    printf("1. Front\n2. Middle\n3. End\n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        position = 0;
    }
    else if (choice == 2)
    {
        position = n / 2;
    }
    else if (choice == 3)
    {
        position = n - 1;
    }
    else
    {
        printf("Invalid choice!\n");
        return 0;
    }
    for (i = position; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("\nArray after deletion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
