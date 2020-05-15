#pragma once
#include <string>
#include <map>

namespace ImplementTrie
{
	struct TrieNode {
		std::map<char, TrieNode*> children;
		bool isLeaf = false;
	};

	class Trie {
	public:
		Trie();
		void insert(std::string word);
		bool search(std::string word);
		bool startsWith(std::string prefix);

	private:
		TrieNode* root;
		void insertHelper(const std::string& word, TrieNode* node, const int depth);
		bool searchHelper(const std::string& word, TrieNode* node, const int depth);
		bool startWithHelper(const std::string& prefix, TrieNode* node, const int depth);
	};
}