/*Find the length of the Longest Non-decreasing Subsequence in a given Sequence.*/
#include <stdio.h>
#include <stdlib.h>
int longestNonDecreasingSubsequence(int *sequence, int n) {
    if (n == 0) {
        return 0;
    }
    int *dp = (int *)malloc(n * sizeof(int));
    if (dp == NULL) {
        return -1; 
    }
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (sequence[i] >= sequence[j]) {
                if (dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                }
            }
        }
    }
    int maxLength = 0;
    for (int i = 0; i < n; i++) {
        if (dp[i] > maxLength) {
            maxLength = dp[i];
        }
    }
    free(dp); 
    return maxLength;
}
int main() {
    int n;
    scanf("%d", &n);
    int *sequence = (int *)malloc(n * sizeof(int));
    if (sequence == NULL) {
        return 1; 
    }
    for (int i = 0; i < n; i++) {
      scanf("%d", &sequence[i]);
    }
    int result = longestNonDecreasingSubsequence(sequence, n);
    printf("%d\n", result);
    free(sequence); 
    return 0;
}