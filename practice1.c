//Q1.Find out the largest value into the given two numbers:

#include<stdio.h>
int main(){
int a,b;
printf("Enter Your First Number:");
scanf("%d",&a);
printf("Enter Your Second Number:");
scanf("%d",&b);
if(a>b)
    printf("%d is largest number",a);
else
    printf("%d is largest number",b);
    return 0;
}