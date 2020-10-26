#include <string>
#include <vector>
#include <algorithm>

class Solution
{
public:
    int minDistance(std::string word1, std::string word2)
    {
        const size_t m{ word1.length() };
        const size_t n{ word2.length() };
        std::vector<std::vector<size_t>> dp(m+1, std::vector<size_t>(n+1, 0));
        for (size_t i{ 1 }; i <= m; i++) dp[i][0] = i;
        for (size_t j{ 1 }; j <= n; j++) dp[0][j] = j;

        for (size_t i{ 1 }; i <= m; i++)
        {
            for (size_t j{ 1 }; j <= n; j++)
            {
                if (word1[i - 1] == word2[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = 1 + std::min( dp[i-1][j-1], std::min( dp[i][j-1], dp[i-1][j] ) );
                }
            }
        }
        return static_cast<int>(dp[m][n]);
    }
};
