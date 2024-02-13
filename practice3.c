#include<stdio.h>
int main(){
int a;
printf("The age of the user:");
scanf("%d",&a);
if(a>18)
     printf("User can give the vote");
else
     printf("User cannot give the vote");
    return 0;
}