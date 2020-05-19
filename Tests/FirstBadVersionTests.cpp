#define CATCH_CONFIG_MAIN
#include "FirstBadVersion.cpp"
#include "catch.hpp"


TEST_CASE("First Bad Version, Example", "[LeetCode]")
{
	int secretFirstBadVersion{ 4 };
	Solution s(secretFirstBadVersion);

	int version{ 5 };

	REQUIRE(secretFirstBadVersion == s.firstBadVersion(version));
}
