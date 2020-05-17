#include "catch.hpp"
#include "ImplementTrie.cpp"

TEST_CASE("TODO NAME")
{
	Trie trie;
	trie.insert("apple");
	
	REQUIRE(true == trie.search("apple"));
	REQUIRE(true == trie.search("app"));
	REQUIRE(true == trie.startsWith("app"));
}
