#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter First Number:");
    scanf("%d", &n1);
    printf("Enter Second Number");
    scanf("%d", &n2);
    int sub;
    sub = n1 + (~n2 + 1);
    printf("Subtraction of %d and %d is: %d ", n1, n2, sub);
    return 0;
}
