/*Write a C program to find Whether the given integer is prime or not.*/
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
   int t=1;
   if(a<2){
       t=0;
   }
   else{
      for(int i=2;i*i<=a;i++){
         if(a%i==0){
           t = 0;
           break;
         }
       }
    }
    if(t==1){
        printf("Prime");
    }
    else{
        printf("No Prime");
    }
 }
 