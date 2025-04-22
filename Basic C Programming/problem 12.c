/*Write a C program to find the Nth term in the fibonacci series.*/
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int l=0,m=1,c;
    if(a==0){
        printf("0");
    }
    else if(a==1){
        printf("1");
    }
    else{
    for(int i=2;i<=a;i++){
        c = l + m;
        l=m;
        m=c;
    }
    printf("%d",c);
}
}
