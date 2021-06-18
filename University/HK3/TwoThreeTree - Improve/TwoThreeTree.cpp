#pragma execution_character_set( "utf-8" )

#include "TwoThreeTree.h"
#include <iostream>

Node* mergeToFirst(Node*, Node*);
Node* split(Node*);

TwoThreeTree::TwoThreeTree()
{
	root = nullptr;
}

void TwoThreeTree::insert(int value)
{
	Node* returnNode = insert(value, root);
	root = returnNode ? returnNode : root;
}

Node* TwoThreeTree::insert(int value, Node* currentNode)
{
	if (currentNode == nullptr)
	{
		return new Node(value);
	}

	Node* returnNode = nullptr;
	for (int i = 0; i <= currentNode->valueSize(); i++)
	{
		if (i == currentNode->valueSize() || value < currentNode->values[i])
		{
			returnNode = insert(value, currentNode->childs[i]);
			break;
		}
	}

	if (returnNode == nullptr) return nullptr;

	if (currentNode->valueSize() == 1)
	{
		mergeToFirst(currentNode, returnNode);
		return nullptr;
	}
	return split(mergeToFirst(currentNode, returnNode));
}

Node* mergeToFirst(Node* n1, Node* n2)
{
	for (int e : n2->values)
	{
		n1->insertValue(e);
	}

	for (Node* e : n2->childs)
	{
		n1->insertChild(e);
	}

	delete n2;
	return n1;
}

Node* split(Node* n)
{
	if (n->valueSize() < 3) return nullptr;

	Node* left = new Node(n->values[0]);
	left->insertChild(n->childs[0]);
	left->insertChild(n->childs[1]);

	Node* right = new Node(n->values[2]);
	right->insertChild(n->childs[2]);
	right->insertChild(n->childs[3]);

	Node* splitNode = new Node(n->values[1]);
	splitNode->insertChild(left);
	splitNode->insertChild(right);

	delete n;
	return splitNode;
}

void TwoThreeTree::printTree()
{
	printTree("", root, false);
}

void TwoThreeTree::printTree(const std::string& prefix, Node* node, bool isLeft)
{
	if (node != nullptr)
	{
		std::cout << prefix;

		std::cout << (isLeft ? "├──" : "└──");

		// print the value of the node
		std::cout << "(" << node->values[0];
		if (node->valueSize() == 2) std::cout << ", " << node->values[1];
		std::cout << ")" << std::endl;

		// enter the next tree level - left and right branch
		printTree(prefix + (isLeft ? "│   " : "    "), node->childs[0], true);
		printTree(prefix + (isLeft ? "│   " : "    "), node->childs[1], !node->valueSize() == 1);
		if(node->valueSize() == 2)
			printTree(prefix + (isLeft ? "│   " : "    "), node->childs[2], false);
	}
}