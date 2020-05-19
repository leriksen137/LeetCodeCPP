#include <vector>


class Solution
{
public:
	int findJudge(int N, std::vector<std::vector<int>>& trust)
	{
		std::vector<int> balance(N + 1);
		for (const auto& t : trust)
		{
			--balance[t[0]];
			++balance[t[1]];
		}
		for (auto i = 1; i <= N; ++i)
		{
			if (balance[i] == N - 1) return i;
		}
		return -1;
	}
};
