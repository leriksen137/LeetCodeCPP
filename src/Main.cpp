#include <iostream>
#include "ImplementTrie.h"
#include "FirstBadVersion.h"

void testImplementTrie()
{
	std::string word = "apple";
	ImplementTrie::Trie* obj = new ImplementTrie::Trie();
	obj->insert(word);
	bool param_2 = obj->search(word);
	bool param_3 = obj->startsWith(word);
}

int main()
{
	testImplementTrie();

	int n = 5;
	int secretFirstBadVersion = 4;
	FirstBadVersion::Solution s(secretFirstBadVersion);
	int f = s.firstBadVersion(n);
	std::cout << f << std::endl;
}
