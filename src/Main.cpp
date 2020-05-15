#include <iostream>
#include "ImplementTrie.h"

int main()
{
	std::string word = "apple";
	ImplementTrie::Trie* obj = new ImplementTrie::Trie();
	obj->insert(word);
	bool param_2 = obj->search(word);
	bool param_3 = obj->startsWith(word);
}
