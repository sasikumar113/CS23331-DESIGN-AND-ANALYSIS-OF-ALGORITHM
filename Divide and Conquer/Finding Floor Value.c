/*Problem Statement:
Given a sorted array and a value x, the floor of x is the largest element in array smaller than or equal to x. Write divide and conquer algorithm to find floor of x.*/
#include <stdio.h>
int findFloor(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int floor = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            return arr[mid];
        }
        else if (arr[mid] < x) {
            floor = arr[mid];
            low = mid + 1;     
        }
        else {
            high = mid - 1;
        }
    }
    return floor;  
}
int main() {
    int n;
    scanf("%d", &n);  
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);  
    int result = findFloor(arr, n, x);
    printf("%d\n", result);
    return 0;
}
