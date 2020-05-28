#include "PossibleBipartition.cpp"
#include "catch.hpp"


TEST_CASE("Possible Bipartition, Example 1", "[LeetCode]")
{
	Solution s;
	int N = 4;
	std::vector<std::vector<int>> dislikes{ {1,2} ,{1,3}, {2,4} };

	REQUIRE(s.possibleBipartition(N, dislikes) == true);
}

TEST_CASE("Possible Bipartition, Example 2", "[LeetCode]")
{
	Solution s;
	int N = 3;
	std::vector<std::vector<int>> dislikes{ {1,2},{1,3},{2,3} };

	REQUIRE(s.possibleBipartition(N, dislikes) == false);
}

TEST_CASE("Possible Bipartition, Example 3", "[LeetCode]")
{
	Solution s;
	int N = 5;
	std::vector<std::vector<int>> dislikes{ {1,2},{2,3},{3,4},{4,5},{1,5} };

	REQUIRE(s.possibleBipartition(N, dislikes) == false);
}
