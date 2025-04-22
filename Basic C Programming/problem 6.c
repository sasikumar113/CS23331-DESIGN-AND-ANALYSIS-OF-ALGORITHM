/*Two numbers M and N are passed as the input. A number X is also passed as the input. The program must print the numbers divisible by X from N to M (inclusive of M and N).*/
#include<stdio.h>
int main(){
    int m,n,x;
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&x);
    for(int i=n;i>=m;i--){
        if(i%x==0){
        printf("%d ",i);
    }
    }
}