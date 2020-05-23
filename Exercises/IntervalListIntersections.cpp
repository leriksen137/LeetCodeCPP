#include <vector>
#include <algorithm>


class Solution
{
public:
	std::vector<std::vector<int>> intervalIntersection(std::vector<std::vector<int>>& A, std::vector<std::vector<int>>& B)
	{
		std::vector<std::vector<int>> result{};

		size_t i{ 0 };
		size_t j{ 0 };
		while (i < A.size() && j < B.size())
		{
			std::vector<int> overlap = calculate_overlap(A[i], B[j]);
			if (!overlap.empty()) result.push_back(overlap);

			if (A[i][1] > B[j][1])
			{
				j++;
			}
			else
			{
				i++;
			}
		}

		return result;
	}

	std::vector<int> calculate_overlap(const std::vector<int>& A, const std::vector<int>& B)
	{
		std::vector<int> result{ std::max(A[0], B[0]) , std::min(A[1], B[1]) };
		if (result[0] > result[1]) result.clear();
		return result;
	}

};
