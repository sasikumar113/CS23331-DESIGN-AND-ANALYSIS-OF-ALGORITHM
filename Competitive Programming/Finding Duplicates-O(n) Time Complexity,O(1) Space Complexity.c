/*Find Duplicate in Array.
Given a read only array of n integers between 1 and n, find one number that repeats.*/
#include <stdio.h>
int findDuplicate(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int absValue = (arr[i] < 0) ? -arr[i] : arr[i]; 
        if (arr[absValue - 1] < 0) {
            return absValue;
        } else {
            arr[absValue - 1] = -arr[absValue - 1];
        }
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int duplicate = findDuplicate(arr, n);
    printf("%d\n", duplicate);
    
    return 0;
}
