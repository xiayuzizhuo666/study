#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int solution(int m, std::string s) {
    int n = s.length();
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(m + 1, 0));

    // Initialize the first row and first column
    for (int j = 0; j <= m; ++j) {
        dp[0][j] = j / 3; // Inserting "UCC" j/3 times
    }

    // Fill the dp table
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            dp[i][j] = dp[i - 1][j]; // No operation

            // Check if we can form a "UCC" at position i
            if (i >= 3) {
                int cost = 0;
                if (s[i - 3] != 'U') cost++;
                if (s[i - 2] != 'C') cost++;
                if (s[i - 1] != 'C') cost++;

                if (j >= cost) {
                    dp[i][j] = std::max(dp[i][j], dp[i - 3][j - cost] + 1);
                }
            }

            // Check if we can insert a "UCC" at position i
            if (j >= 3) {
                dp[i][j] = std::max(dp[i][j], dp[i][j - 3] + 1);
            }
        }
    }

    // Find the maximum number of "UCC" subarrays within the edit distance m
    int maxUCC = 0;
    for (int j = 0; j <= m; ++j) {
        maxUCC = std::max(maxUCC, dp[n][j]);
    }

    return maxUCC;
}

int main() {
    std::cout << (solution(3, "UCUUCCCCC") == 3) << std::endl;
    std::cout << (solution(6, "U") == 2) << std::endl;
    std::cout << (solution(2, "UCCUUU") == 2) << std::endl;
    return 0;
}