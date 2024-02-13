#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Your first number:");
    scanf("%d", &a);
    printf("Enter Your second number:");
    scanf("%d", &b);
    printf("Enter Your third number:");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
            printf("%d is large", a);
        else
            printf("%d is large", c);
    }
    else
    {
        if (b > c)
            printf("%d is large", b);
        else
            printf("%d is large", c);
    }
    return 0;
}