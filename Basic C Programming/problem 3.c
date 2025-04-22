/*Malini goes to BestSave hyper market to buy grocery items. BestSave hyper market provides 10% discount on the bill amount B when ever the bill amount B is more than Rs.2000.
The bill amount B is passed as the input to the program. The program must print the final amount A payable by Malini.
 */
 #include<stdio.h>
int main(){
    float billAmount,finalAmount;
    scanf("%f",&billAmount);
    if (billAmount > 2000) {
        finalAmount = billAmount - (0.10*billAmount);
    }else{
        finalAmount = billAmount;
    }
    printf("%.2f\n", finalAmount);
    return 0;
}