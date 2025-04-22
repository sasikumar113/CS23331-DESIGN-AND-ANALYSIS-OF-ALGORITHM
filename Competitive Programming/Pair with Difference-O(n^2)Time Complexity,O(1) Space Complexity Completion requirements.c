/*Given an array A of sorted integers and another non negative integer k, find if there exists 2 indices i and j such that A[j] - A[i] = k, i != j.*/
#include <stdio.h>
int findPairWithDifference(int arr[], int n, int k) {
    int i = 0, j = 0;
    while (j < n) {
        int diff = arr[j] - arr[i];
        if (diff == k && i != j) {
            return 1;
        }
        if (diff < k) {
            j++;
        } 
        else {
            i++;
        }
        if (i == j) {
            j++;
        }
    }
    return 0;
}

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    int result = findPairWithDifference(arr, n, k);
    printf("%d\n", result);
    return 0;
}
