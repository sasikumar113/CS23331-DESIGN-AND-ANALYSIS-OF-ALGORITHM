/*Given an array of N integer, we have to maximize the sum of arr[i] * i, where i is the index of the element (i = 0, 1, 2, ..., N).Write an algorithm based on Greedy technique with a Complexity O(nlogn).*/
#include<stdio.h>
#include<stdlib.h>
int compare(const void*a,const void*b){
    return(*(int*)a-*(int*)b);
}
long long maxSum(int arr[],int n){
    qsort(arr,n,sizeof(int),compare);
    long long sum=0;
    for(int i=0;i<n;i++){
        sum +=(long long)arr[i]*i;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%lld\n",maxSum(arr,n));
    return 0;
}