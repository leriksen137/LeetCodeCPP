#include <vector>
#include <algorithm>


class Solution
{
public:
	int maxUncrossedLines(std::vector<int>& A, std::vector<int>& B)
	{
		const size_t m{ A.size() };
		const size_t n{ B.size() };
		std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1, 0));
		for (size_t i{ 1 }; i < m + 1; i++)
		{
			for (size_t j{ 1 }; j < n + 1; j++)
			{
				if (A[i - 1] == B[j - 1])
				{
					dp[i][j] = 1 + dp[i - 1][j - 1];
				}
				else
				{
					dp[i][j] = std::max(dp[i][j - 1], dp[i - 1][j]);
				}
			}
		}
		return dp[m][n];
	}
}; 
