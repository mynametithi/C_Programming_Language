//3.Write a program to check wheather a number is divisible by 97 or not.
#include<stdio.h>
int main(){
    int num;
printf("Enter the number:\n");
scanf("%d", &num); 
printf("Divisibility test returns:%d",num%97);
    return 0;
}
//return:97
//divisibility returns:0;