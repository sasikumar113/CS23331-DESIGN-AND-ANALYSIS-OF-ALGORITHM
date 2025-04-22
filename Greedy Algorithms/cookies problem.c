/*Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.
Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with; and each cookie j has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content. Your goal is to maximize the number of your content children and output the maximum number.*/
#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b){
    return(*(int *)a - *(int *)b);
}
int findContentChildren(int *g,int gsize,int *s, int sSize){
    qsort(g,gsize,sizeof(int),compare);
    qsort(g,gsize,sizeof(int),compare);
    int i=0,j=0,count=0;
    while(i < gsize && j < sSize){
        if(s[j]>=g[i]){
            count++;
            i++;
        }
        j++;
    }
    return count;
} 
int main(){
    int g[]={1,2,3};
    int s[]={1,2};
    int gSize = sizeof(g)/sizeof(g[0]);
    int sSize = sizeof(s)/sizeof(s[0]);
    int result=findContentChildren(g,gSize,s,sSize);
    printf("%d\n",result);
    return 0;
}