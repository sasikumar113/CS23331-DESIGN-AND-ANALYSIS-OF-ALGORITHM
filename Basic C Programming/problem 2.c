/*Write a C program to find the eligibility of admission for a professional course based on the following criteria:
Marks in Maths >= 65
Marks in Physics >= 55
Marks in Chemistry >= 50
Or
Total in all three subjects >= 180*/
#include<stdio.h>
int main(){
    int maths,physics,chemistry,total;
    scanf("%d",&maths);
    scanf("%d",&physics);
    scanf("%d",&chemistry);
    total=maths+physics+chemistry;
    if((maths>=65 && physics>=55 && chemistry>=50)||total>=180){
       printf("The candidate is eligible");
    }else{
        printf("The candidate is not eligible");
    } 
    return 0;
}