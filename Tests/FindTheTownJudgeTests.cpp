#include "catch.hpp"

#include "FindTheTownJudge.cpp"

#include <vector>

TEST_CASE("Find the town Judge, Example 1", "[LeetCode]")
{
	Solution s;
	int N = 2;
	std::vector<std::vector<int>> trust {{1, 2}};

	REQUIRE(s.findJudge(N, trust) == 2);
}

TEST_CASE("Find the town Judge, Example 2", "[LeetCode]")
{
	Solution s;
	int N = 3;
	std::vector<std::vector<int>> trust {{1, 3}, {2, 3}};

	REQUIRE(s.findJudge(N, trust) == 3);
}

TEST_CASE("Find the town Judge, Example 3", "[LeetCode]")
{
	Solution s;
	int N = 3;
	std::vector<std::vector<int>> trust {{1, 3}, {2, 3}, {3, 1}};

	REQUIRE(s.findJudge(N, trust) == -1);
}

TEST_CASE("Find the town Judge, Example 4", "[LeetCode]")
{
	Solution s;
	int N = 3;
	std::vector<std::vector<int>> trust {{1, 2}, {2, 3}};

	REQUIRE(s.findJudge(N, trust) == -1);
}

TEST_CASE("Find the town Judge, Example 5", "[LeetCode]")
{
	Solution s;
	int N = 4;
	std::vector<std::vector<int>> trust {{1, 3}, {1, 4}, {2, 3}, {2, 4}, {4, 3}};

	REQUIRE(s.findJudge(N, trust) == 3);
}
