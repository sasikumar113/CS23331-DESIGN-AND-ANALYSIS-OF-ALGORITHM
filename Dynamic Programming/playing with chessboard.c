/*Ram is given with an n*n chessboard with each cell with a monetary value. Ram stands at the (0,0), that the position of the top left white rook. He is been given a task to reach the bottom right black rook position (n-1, n-1) constrained that he needs to reach the position by traveling the maximum monetary path under the condition that he can only travel one step right or one step down the board. Help ram to achieve it by providing an efficient DP algorithm.*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    int **board = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        board[i] = (int *)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            scanf("%d", &board[i][j]);
        }
    }
    long long int **dp = (long long int **)malloc(n * sizeof(long long int *));
    for (int i = 0; i < n; i++) {
        dp[i] = (long long int *)malloc(n * sizeof(long long int));
    }
    dp[0][0] = board[0][0];
    for (int i = 1; i < n; i++) {
        dp[0][i] = dp[0][i - 1] + board[0][i];
    }
    for (int i = 1; i < n; i++) {
        dp[i][0] = dp[i - 1][0] + board[i][0];
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (dp[i - 1][j] > dp[i][j - 1]) {
                dp[i][j] = dp[i - 1][j] + board[i][j];
            } else {
                dp[i][j] = dp[i][j - 1] + board[i][j];
            }
        }
    }
    printf("%lld\n", dp[n - 1][n - 1]);
    for (int i = 0; i < n; i++) {
        free(board[i]);
        free(dp[i]);
    }
    free(board);
    free(dp);
    return 0;
}