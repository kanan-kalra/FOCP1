// using a third variable
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter First Number:");
    scanf("%d", &a);
    printf("Enter Second Number:");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;
    printf("First Number After Swapping is : %d \nSecond Number After Swapping is; %d ", a, b);
    return 0;
}

// using XOR bitwise operator
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter First Number:");
    scanf("%d", &a);
    printf("Enter Second Number:");
    scanf("%d", &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("First Number After Swapping is : %d \nSecond Number After Swapping is; %d ", a, b);
    return 0;
}

// using arithmetic operators
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter First Number:");
    scanf("%d", &a);
    printf("Enter Second Number:");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("First Number After Swapping is : %d \nSecond Number After Swapping is; %d ", a, b);
    return 0;
}
