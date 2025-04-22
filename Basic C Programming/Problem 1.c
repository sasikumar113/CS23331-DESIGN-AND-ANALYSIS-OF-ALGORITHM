/*Given two numbers, write a C program to swap the given numbers.*/
#include <stdio.h>
int main(){
    int a,b,temp,count=0;
    scanf("%d %d",&a,&b);
    temp = a;
    count++;
    a = b;
    count++;
    b = temp;
    printf("%d %d",a,b);
    return 0;
}
