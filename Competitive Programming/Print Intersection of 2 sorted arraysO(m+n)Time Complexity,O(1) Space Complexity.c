/*Find the intersection of two sorted arrays.
OR in other words*/
#include <stdio.h>
void findIntersection(int arr1[], int n1, int arr2[], int n2) {
    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            i++; 
        } else if (arr1[i] > arr2[j]) {
            j++; 
        } else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
    printf("\n");
}
int main() {
    int T;
    scanf("%d", &T);  
    while (T--) {
        int N1;
        scanf("%d", &N1); 
        int arr1[N1];
        for (int i = 0; i < N1; i++) {
            scanf("%d", &arr1[i]);
        }
        
        int N2;
        scanf("%d", &N2);  
        int arr2[N2];
        for (int i = 0; i < N2; i++) {
            scanf("%d", &arr2[i]);
        }
        findIntersection(arr1, N1, arr2, N2);
    }
    
    return 0;
}