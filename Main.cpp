#include <iostream>
#include <assert.h>
#include "CheckIfItIsAStraightLine.h"
#include "CousinsInBinaryTree.h"
#include "FindTheTownJudge.h"
#include "FirstBadVersion.h"
#include "FirstUniqueCharacterInAString.h"
#include "FloodFill.h"
#include "ImplementTrie.h"
#include "JewelsAndStones.h"
#include "ListNode.h"
#include "MajorityElement.h"
#include "MaximumSumCircularSubarray.h"
#include "NumberComplement.h"
#include "OddEvenLinkedList.h"
#include "RansomNote.h"
#include "SingleElementInASortedArray.h"
#include "ValidPerfectSquare.h"


void testImplementTrie()
{
	ImplementTrie::Trie* obj = new ImplementTrie::Trie();
	obj->insert("apple");
	bool r1 = obj->search("apple");
	bool r2 = obj->search("app");
	bool r3 = obj->startsWith("app");
	assert(r1 && !r2 && r3);
}

void testFirstBadVersion()
{
	int n = 5;
	int secretFirstBadVersion = 4;
	//FirstBadVersion::Solution s(4);
	//assert(secretFirstBadVersion == s.firstBadVersion(n));
}

int main()
{
	testImplementTrie();
	testFirstBadVersion();

	ListNode* root = new ListNode(3);
	OddEvenLinkedList::Solution* s = new OddEvenLinkedList::Solution();
	ListNode* result = s->oddEvenList(root);
	

	std::cout << "All test passed!";

}
