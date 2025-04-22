/*Convert the following algorithm into a program and find its time complexity using the counter method.
void function (int n)
{
    int i= 1;
    int s =1;
    while(s <= n)
    {
         i++;
         s += i;
     }      
}     
Note: No need of counter increment for declarations and scanf() and  count variable printf() statements.*/
#include <stdio.h>
void fun(int n){
    int c=0;
    int i=1;
    c++;
    int s=1;
    c++;
    while(s<=n){
        c++;
        i++;
        c++;
        s+=i;
        c++;
    }
    c++;
    printf("%d",c);
}
int main(){
    int n;
    scanf("%d",&n);
    fun(n);
    
}