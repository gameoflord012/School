#pragma once
#include "TwoThreeNode.h"
#include <string>

class TwoThreeTree
{
public:
	Node* root;

	TwoThreeTree();
	void insert(int value);
	void printTree();

private:
	void printTree(const std::string&, Node*, bool);
	Node* insert(int, Node*);
};

