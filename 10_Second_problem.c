// 4.Explain step by step evalution of 3*X/Y-Z+R where X=2,Y=3,Z=3,R=1.
#include<stdio.h>
int main(){
int X=2;
int Y=3;
int Z=3;
int R=1;
int result=3*X/Y-Z+R;
//left to right solve
//6/3-3+1
//2-3+1
//0
printf("The value of result is %d",result);
    return 0;
}