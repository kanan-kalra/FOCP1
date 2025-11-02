#include <stdio.h>
int main()
{
    int rows, i, j;
    printf("Enter Number of Rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 0; j < i; j++)
            printf("%d", j % 2);
        for (j = 0; j < (rows - i) * 2; j++)
            printf(" ");
        for (j = 0; j < i; j++)
            printf("%d", j % 2);

        printf("\n");
    }
    return 0;
}
