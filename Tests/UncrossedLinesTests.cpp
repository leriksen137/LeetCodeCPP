#include "UncrossedLines.cpp"
#include "catch.hpp"


TEST_CASE("Uncrossed Lines, Example 1", "[LeetCode]")
{
	Solution s;
	std::vector<int> A{ 1, 4, 2 };
	std::vector<int> B{ 1, 2, 4 };
	int result = s.maxUncrossedLines(A, B);

	REQUIRE(result == 2);
}

TEST_CASE("Uncrossed Lines, Example 2", "[LeetCode]")
{
	Solution s;
	std::vector<int> A{ 2,5,1,2,5 };
	std::vector<int> B{ 10,5,2,1,5,2 };
	int result = s.maxUncrossedLines(A, B);

	REQUIRE(result == 3);
}

TEST_CASE("Uncrossed Lines, Example 3", "[LeetCode]")
{
	Solution s;
	std::vector<int> A{ 1,3,7,1,7,5 };
	std::vector<int> B{ 1,9,2,5,1 };
	int result = s.maxUncrossedLines(A, B);

	REQUIRE(result == 2);
}
