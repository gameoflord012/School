#pragma execution_character_set( "utf-8" )

#include "TwoThreeTree.h"
#include <iostream>

TwoThreeTree::TwoThreeTree()
{
	root = nullptr;
}

void TwoThreeTree::insert(int value)
{
	Node* returnNode = insert(value, root);
	root = returnNode ? returnNode : root;
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
		std::cout << "(" << node->leftValue;
		if (!node->IsTwoChild()) std::cout << ", " << node->rightValue;
		std::cout << ")" << std::endl;

		// enter the next tree level - left and right branch
		printTree(prefix + (isLeft ? "│   " : "    "), node->fistChild, true);
		printTree(prefix + (isLeft ? "│   " : "    "), node->secondChild, !node->IsTwoChild());
		printTree(prefix + (isLeft ? "│   " : "    "), node->thirdChild, false);
	}
}

Node* TwoThreeTree::insert(int value, Node* currentNode)
{
	if (currentNode == nullptr)
		return new Node(value);

	if (currentNode->IsTwoChild())
	{
		if (value < currentNode->leftValue)
		{
			Node* returnNode = insert(value, currentNode->fistChild);
			if (returnNode == nullptr) return nullptr;

			currentNode->thirdChild = currentNode->secondChild;
			currentNode->secondChild = returnNode->secondChild;
			currentNode->fistChild = returnNode->fistChild;

			currentNode->rightValue = currentNode->leftValue;
			currentNode->leftValue = returnNode->leftValue;

			delete returnNode;
		}
		else
		{
			Node* returnNode = insert(value, currentNode->secondChild);
			if (returnNode == nullptr) return nullptr;

			currentNode->secondChild = returnNode->fistChild;
			currentNode->thirdChild = returnNode->secondChild;
			
			currentNode->rightValue = returnNode->leftValue;

			delete returnNode;
		}

		return nullptr;
	}
	else
	{
		if (value < currentNode->leftValue)
		{
			Node* returnNode = insert(value, currentNode->fistChild);
			if (returnNode == nullptr) return nullptr;

			Node* leftNode = new Node(returnNode->leftValue);
			leftNode->fistChild = returnNode->fistChild;
			leftNode->secondChild = returnNode->secondChild;

			Node* rightNode = new Node(currentNode->rightValue);
			rightNode->fistChild = currentNode->secondChild;
			rightNode->secondChild = currentNode->thirdChild;

			Node* splitNode = new Node(currentNode->leftValue);
			splitNode->fistChild = leftNode;
			splitNode->secondChild = rightNode;

			delete currentNode;
			delete returnNode;

			return splitNode;
		}
		else if (value < currentNode->rightValue)
		{
			Node* returnNode = insert(value, currentNode->secondChild);
			if (returnNode == nullptr) return nullptr;

			Node* leftNode = new Node(currentNode->leftValue);
			leftNode->fistChild = currentNode->fistChild;
			leftNode->secondChild = returnNode->fistChild;

			Node* rightNode = new Node(currentNode->rightValue);
			rightNode->fistChild = returnNode->secondChild;
			rightNode->secondChild = currentNode->secondChild;

			Node* splitNode = new Node(returnNode->leftValue);
			splitNode->fistChild = leftNode;
			splitNode->secondChild = rightNode;

			delete currentNode;
			delete returnNode;

			return splitNode;
		}
		else if (value > currentNode->rightValue)
		{
			Node* returnNode = insert(value, currentNode->thirdChild);
			if (returnNode == nullptr) return nullptr;

			Node* leftNode = new Node(currentNode->leftValue);
			leftNode->fistChild = currentNode->fistChild;
			leftNode->secondChild = currentNode->secondChild;

			Node* rightNode = new Node(returnNode->leftValue);
			rightNode->fistChild = returnNode->fistChild;
			rightNode->secondChild = returnNode->secondChild;

			Node* splitNode = new Node(currentNode->rightValue);
			splitNode->fistChild = leftNode;
			splitNode->secondChild = rightNode;

			delete currentNode;
			delete returnNode;

			return splitNode;
		}
	}

	return nullptr;
}
