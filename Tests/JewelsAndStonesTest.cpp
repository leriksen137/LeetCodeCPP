#include "catch.hpp"
#include "JewelsAndStones.h"

#include <string>

namespace JewelsAndStones
{
	TEST_CASE("Example 1")
	{
		Solution s;
		REQUIRE(3 == s.numJewelsInStones("aA", "aAAbbbb"));
	}

	TEST_CASE("Example 2")
	{
		Solution s;
		REQUIRE(0 == s.numJewelsInStones("z", "ZZ"));
	}
}