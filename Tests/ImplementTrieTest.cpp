#include "catch.hpp"
#include "ImplementTrie.h"

TEST_CASE("TODO NAME")
{
	ImplementTrie::Trie trie;
	trie.insert("apple");
	
	REQUIRE(true == trie.search("apple"));
	REQUIRE(true == trie.search("app"));
	REQUIRE(true == trie.startsWith("app"));
}