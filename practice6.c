#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Your First number");
    scanf("%d", &a);
    printf("Enter Your Second number");
    scanf("%d", &b);
    printf("Enter Your third number");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            if (b > c)
                printf("%d is max\n %d is middle\n %d is small\n", a, b, c);
            else
                printf("%d is max\n %d is middle\n %d is small\n", a, c, b);
        }
        else
            printf("%d is max\n %d is middle\n %d is small\n", c, a, b);
    }
    else
    {
        if (b > c)
        {
            if (a > c)
                printf("%d is max\n %d is middle\n %d is small\n", b, a, c);
            else
                printf("%d is max\n %d is middle\n %d is small\n", b, c, a);
        }
        else
            printf("%d is max\n %d is middle\n %d is small\n", c, b, a);
    }
    return 0;
}