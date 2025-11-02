#include <stdio.h>
#include <math.h>
int main()
{
    int n, copy;
    printf("Enter Your Number:");
    scanf("%d", &n);
    copy = n;
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count += 1;
    }
    n = copy;
    int rem, sum = 0;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + (int)pow(rem, count);
        n = n / 10;
    }
    if (copy == sum)
        printf("Given Numnber is an Armstrong Number");
    else
        printf("Given Number is not an Armstrong Number");
    return 0;
}
