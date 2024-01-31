//Write a program to simple interest for a set of values representing principal no of years and rate of interest
#include<stdio.h>
int main(){
int principal=400,rate=10,years=2;
int simple_interest=(principal*rate*years)/100;
printf("The value of simple interst is %d",simple_interest);
    return 0;
}