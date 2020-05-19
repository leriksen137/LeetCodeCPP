#include "MaximumSumCircularSubarray.cpp"
#include "catch.hpp"


TEST_CASE("Maximum Sum Circular Subarray, Example 1", "[LeetCode]")
{
	Solution s;
	std::vector<int> A{ 1,-2,3,-2 };

	REQUIRE(s.maxSubarraySumCircular(A) == 3);
}

TEST_CASE("Maximum Sum Circular Subarray, Example 2", "[LeetCode]")
{
	Solution s;
	std::vector<int> A{ 5, -3, 5 };

	REQUIRE(s.maxSubarraySumCircular(A) == 10);
}

TEST_CASE("Maximum Sum Circular Subarray, Example 3", "[LeetCode]")
{
	Solution s;
	std::vector<int> A{ 3, -1, 2, -1 };

	REQUIRE(s.maxSubarraySumCircular(A) == 4);
}

TEST_CASE("Maximum Sum Circular Subarray, Example 4", "[LeetCode]")
{
	Solution s;
	std::vector<int> A{ 3, -2, 2, -3 };

	REQUIRE(s.maxSubarraySumCircular(A) == 3);
}

TEST_CASE("Maximum Sum Circular Subarray, Example 5", "[LeetCode]")
{
	Solution s;
	std::vector<int> A{ -2, -3, -1};

	REQUIRE(s.maxSubarraySumCircular(A) == -1);
}
