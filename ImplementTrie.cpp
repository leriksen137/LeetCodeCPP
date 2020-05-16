#include "ImplementTrie.h"

namespace ImplementTrie
{
	Trie::Trie()
	{
		root = new TrieNode();
	}

	void Trie::insert(std::string word)
	{
		insertHelper(word, root, 0);
	}

	bool Trie::search(std::string word)
	{
		return searchHelper(word, root, 0);
	}

	bool Trie::startsWith(std::string prefix)
	{
		return startWithHelper(prefix, root, 0);
	}

	void Trie::insertHelper(const std::string& word, TrieNode* node, const int depth)
	{
		if (depth == word.length())
		{
			node->isLeaf = true;
			return;
		}
		const char c = word[depth];
		if (node->children.count(c) == 0)
		{
			node->children[c] = new TrieNode();
		}
		insertHelper(word, node->children[c], depth + 1);
	}

	bool Trie::searchHelper(const std::string& word, TrieNode* node, const int depth)
	{
		if (depth == word.length())
		{
			return node->isLeaf;
		}
		const char c = word[depth];
		if (node->children.count(c) == 0)
		{
			return false;
		}
		return searchHelper(word, node->children[c], depth + 1);
	}

	bool Trie::startWithHelper(const std::string& prefix, TrieNode* node, const int depth)
	{
		if (depth == prefix.length())
		{
			return true;
		}
		const char c = prefix[depth];
		if (node->children.count(c) == 0)
		{
			return false;
		}
		return startWithHelper(prefix, node->children[c], depth + 1);
	}
}