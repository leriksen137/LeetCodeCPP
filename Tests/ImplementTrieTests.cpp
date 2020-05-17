#include "catch.hpp"

#include "ImplementTrie.cpp"

TEST_CASE("Implement Trie, Example 1", "[LeetCode]")
{
	Trie trie;

	trie.insert("apple");
	REQUIRE(trie.search("apple") == true);
	REQUIRE(trie.search("app") == false);
	REQUIRE(trie.startsWith("app") == true);
	trie.insert("app");
	REQUIRE(trie.search("app") == true);
}
