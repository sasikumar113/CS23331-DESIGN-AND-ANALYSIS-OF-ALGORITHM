/*Given two arrays array_One[] and array_Two[] of same size N. We need to first rearrange the arrays such that the sum of the product of pairs( 1 element from each) is minimum. That is SUM (A[i] * B[i]) for all i is minimum.*/
#include <stdio.h>
#include <stdlib.h>
int compare_ascending(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int compare_descending(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}
int min_product_sum(int array_one[], int array_two[], int n) {
    qsort(array_one, n, sizeof(int), compare_ascending);
    qsort(array_two, n, sizeof(int), compare_descending);
    int min_sum = 0;
    for (int i = 0; i < n; i++) {
        min_sum += array_one[i] * array_two[i];
    }
    return min_sum;
}
int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1; 
    }
    int array_one[n];
    int array_two[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &array_one[i]) != 1) {
            return 1; 
        }
    }
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &array_two[i]) != 1) {
            return 1;
        }
    }
    int result = min_product_sum(array_one, array_two, n);
    printf("%d\n", result);
    return 0;
}