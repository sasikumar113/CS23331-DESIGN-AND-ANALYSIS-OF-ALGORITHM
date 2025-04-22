/*Write a C program to find the quotient and reminder of given integers. */
#include<stdio.h>
int main(){
    int dividend,divisor,quotient,remainder;
    scanf("%d %d",&dividend,&divisor);
    quotient=dividend/divisor;
    remainder=dividend%divisor;
    printf("%d\n%d\n",quotient,remainder);
    return 0;
}