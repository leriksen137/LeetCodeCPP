#include "OnlineStockSpan.cpp"
#include "catch.hpp"

#include <vector>


TEST_CASE("Online Stock Span, Example 1", "[LeetCode]")
{
	StockSpanner s;
	std::vector<int> result;
	result.push_back(s.next(100));
	result.push_back(s.next(80));
	result.push_back(s.next(60));
	result.push_back(s.next(70));
	result.push_back(s.next(60));
	result.push_back(s.next(75));
	result.push_back(s.next(85));
	std::vector<int> expected{ 1, 1, 1, 2, 1, 4, 6 };
	
	REQUIRE(result == expected);
}
