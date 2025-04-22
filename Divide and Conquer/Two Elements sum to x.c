/*Given a sorted array of integers say arr[] and a number x. Write a recursive program using divide and conquer strategy to check if there exist two elements in the array whose sum = x. If there exist such two elements then return the numbers, otherwise print as “No”.
Note: Write a Divide and Conquer Solution*/
#include<stdio.h>
#include<stdlib.h>
int findPair(int arr[],int low,int high,int x,int *num1,int *num2){
    if(low >= high){
        return 0;
    }
    if(arr[low]+arr[high]==x){
        *num1 = arr[low];
        *num2 = arr[high];
        return 1;
    }else if(arr[low]+arr[high]<x){
        return findPair(arr,low+1,high,x,num1,num2);
    }
    else{
        return findPair(arr,low,high-1,x,num1,num2);
    }
}
int main(){
    int n,x,num1,num2;
    scanf("%d",&n);
    int *arr=(int*)malloc(n* sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    if(findPair(arr,0,n-1,x,&num1,&num2)){
        printf("%d\n",num1);
        printf("%d\n",num2);
    }
    else{
        printf("No\n");
    }
    free(arr);
    return 0;
}