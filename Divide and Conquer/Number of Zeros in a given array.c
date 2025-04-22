/*Given an array of 1s and 0s this has all 1s first followed by all 0s. Aim is to find the number of 0s. Write a program using Divide and Conquer to Count the number of zeroes in the given array.
Input Format
   First Line Contains Integer m – Size of array
   Next m lines Contains m numbers – Elements of an array
Output Format
   First Line Contains Integer – Number of zeroes present in the given array.*/
   #include <stdio.h>
int count_zeros(int arr[], int low, int high) {
    if (low > high) {
        return 0;
    }
    if (low == high) {
        return (arr[low] == 0) ? 1 : 0;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == 0) {
        return high - mid + 1 + count_zeros(arr, low, mid - 1);
    } else {
        return count_zeros(arr, mid + 1, high);
    }
}
int main() {
    int m; 
    scanf("%d", &m);  
    int arr[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }
    int result = count_zeros(arr, 0, m - 1);
    printf("%d\n", result);
    return 0;
}
