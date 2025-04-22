/*Baba is very kind to beggars and every day Baba donates half of the amount he has when ever a beggar requests him. The money M left in Baba's hand is passed as the input and the number of beggars B who received the alms are passed as the input. The program must print the money Baba had in the beginning of the day.*/
#include<stdio.h>
#include<math.h>
int main(){
    double m,b,initialAmount;
    scanf("%lf %lf",&m,&b);
    initialAmount=m*pow(2,b);
    printf("%.0lf\n",initialAmount);
    return 0;
}
