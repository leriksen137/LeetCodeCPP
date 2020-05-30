#include "KClosestPointstoOrigin.cpp"
#include "catch.hpp"


TEST_CASE("K Closest Points to Origin, Example 1", "[LeetCode]")
{
	Solution s;
	int K = 1;
	std::vector<std::vector<int>> points{ {1, 3},{-2, 2} };
	std::vector<std::vector<int>> expected{ {-2, 2} };
	
	REQUIRE(s.kClosest(points, K) == expected);
}

TEST_CASE("K Closest Points to Origin, Example 2", "[LeetCode]")
{
	Solution s;
	int K = 2;
	std::vector<std::vector<int>> points{ {3, 3}, { 5, -1}, { -2, 4} };
	std::vector<std::vector<int>> expected{ {3, 3}, { -2, 4} };

	REQUIRE(s.kClosest(points, K) == expected);
}
