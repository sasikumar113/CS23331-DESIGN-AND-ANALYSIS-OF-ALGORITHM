/*The CEO of company ABC Inc wanted to encourage the employees coming on time to the office. So he announced that for every consecutive day an employee comes on time in a week (starting from Monday to Saturday), he will be awarded Rs.200 more than the previous day as "Punctuality Incentive". The incentive I for the starting day (ie on Monday) is passed as the input to the program. The number of days N an employee came on time consecutively starting from Monday is also passed as the input. The program must calculate and print the "Punctuality Incentive" P of the employee.*/
#include<stdio.h>
int main(){
    int i,n,p,totalIncentive=0;
    scanf("%d %d", &i,&n);
    p=i;
    totalIncentive=p;
    for(int day=2; day<=n;day++){
        p+=200;
        totalIncentive += p;
    }
    printf("%d\n",totalIncentive);
    return 0;
}