/*Write a C program to find the reverse of the given integer?*/
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int rev =0;
    while(a>0){
        rev=rev*10+(a%10);
        a=a/10;
        
    }
    printf("%d",rev);
}
