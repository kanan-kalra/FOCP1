#include <stdio.h>
int main()
{
    int n, x, y, z = 0;
    printf("enter your max limit:");
    scanf("%d", &n);
    if(n<0)
    {
        printf("Enter a Positive Integer ");
    }
    x = 0;
    y = 1;
    while (z <= n)
    {
        printf("%d ", z);
        x = y;
        y = z;
        z = x + y;
    }
    return 0;
}
