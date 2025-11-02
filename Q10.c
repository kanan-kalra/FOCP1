#include <stdio.h>
    int main()
{
    int n, i, count = 0;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter the marks of %d students:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }
    printf("Students who scored 99 are: ");
    for (i = 0; i < n; i++)
    {
        if (marks[i] == 99)
        {
            printf("%d ", i + 1);
            count++;
        }
    }
    if (count > 0)
    {
        printf("\nTotal number of students who scored 99 are at positions : %d\n", count);
    }
    else
    {
        printf("\nNo student scored 99.\n");
    }

    return 0;
}
