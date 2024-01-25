#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

void printLCS(char *X, char *Y, int m, int n, int dp[][100]) {
    int index = dp[m][n];
    char lcs[index + 1];
    lcs[index] = '\0';

    int i = m, j = n; 
    while (i > 0 && j > 0) {
        if (X[i - 1] == Y[j - 1]) {
            lcs[index - 1] = X[i - 1];
            i--;
            j--;
            index--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    printf("Longest Common Subsequence: %s\n", lcs);
}

int greedyLCS(char *X, char *Y, int m, int n) {
    int dp[100][100];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (X[i - 1] == Y[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    printLCS(X, Y, m, n, dp);

    return dp[m][n];
}

int main() {
    char X[] = "ABCBDAB";
    char Y[] = "BDCABA" ;

    int m = strlen(X);
    int n = strlen(Y);

    int length = greedyLCS(X, Y, m, n);

    printf("Length of LCS: %d\n", length);

    return 0;
}
