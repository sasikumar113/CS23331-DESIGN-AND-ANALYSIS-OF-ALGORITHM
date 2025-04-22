/*Ram and Sita are playing with numbers by giving puzzles to each other. Now it was Ram term, so he gave Sita a positive integer ‘n’ and two numbers 1 and 3. He asked her to find the possible ways by which the number n can be represented using 1 and 3.Write any efficient algorithm to find the possible ways.*/
#include <stdio.h>
#include <stdlib.h>

long long int countWays(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }

    long long int *dp = (long long int *)malloc((n + 1) * sizeof(long long int));
    if (dp == NULL) {
        return -1; // Or handle error appropriately
    }

    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i - 1];
        if (i >= 3) {
            dp[i] += dp[i - 3];
        }
    }

    long long int result = dp[n];
    free(dp);
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", countWays(n)); // Use %lld for long long int
    return 0;
}