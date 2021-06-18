#pragma once
#include <vector>

class Node
{
public:
	std::vector<int> values;
	std::vector<Node*> childs;

	Node();
	Node(int);

	int valueSize();
	void insertValue(int);
	void insertChild(Node* child);

	int getValue();
	Node* getLeftChild();
	Node* getRightChild();

private:
	void fixChild();
};

