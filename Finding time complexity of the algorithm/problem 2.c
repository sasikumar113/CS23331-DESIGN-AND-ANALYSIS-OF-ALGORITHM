/*Convert the following algorithm into a program and find its time complexity using the counter method.
void func(int n)
{
    if(n==1)
    {
      printf("*");
    }
    else
    {
     for(int i=1; i<=n; i++)
     {
       for(int j=1; j<=n; j++)
       {
          printf("*");
          printf("*");
          break;
       }
     }
   }                      
 }

Note: No need of counter increment for declarations and scanf() and  count variable printf() statements.*/
#include<stdio.h>
void fun(int n)
{
    int c=0;
    if(n==1)
    {
        c++;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            c++;
            for(int j=1;i<=n;j++)
            {
                c++;
                c++;
                c++;
                break;
            }
            c++;
        }
        c++;
    }
    c++;
    printf("%d",c);
}
int main(){
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}