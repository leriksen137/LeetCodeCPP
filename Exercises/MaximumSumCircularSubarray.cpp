#include <vector>

class Solution
{
public:
	int maxSubarraySumCircular(std::vector<int>& A)
	{
		int sum = A[0];
		int max_until_here = A[0];
		int max_all = A[0];
		int min_until_here = A[0];
		int min_all = A[0];

		for (int i = 1; i < A.size(); i++)
		{
			sum += A[i];
			max_until_here = std::max(A[i], max_until_here + A[i]);
			if (max_until_here > max_all)
			{
				max_all = max_until_here;
			}
			min_until_here = std::min(A[i], min_until_here + A[i]);
			if (min_until_here < min_all)
			{
				min_all = min_until_here;
			}
		}
		if (sum == min_all) return max_all;
		return sum - min_all > max_all ? sum - min_all : max_all;
	}
};
