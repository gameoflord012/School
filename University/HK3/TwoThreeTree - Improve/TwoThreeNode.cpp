#include "TwoThreeNode.h"
#include <algorithm>

std::vector<Node*> RemoveNullPtr(std::vector<Node*>);

Node::Node()
{
}

Node::Node(int leftValue)
{
	values.push_back(leftValue);
	fixChild();
}

int Node::valueSize()
{
	return values.size();
}

int Node::getValue()
{
	return values[0];
}

Node* Node::getLeftChild()
{
	return childs[0];
}

Node* Node::getRightChild()
{
	return childs[1];
}

void Node::insertValue(int value)
{
	values.push_back(value);
	std::sort(values.begin(), values.end());

	fixChild();
}

void Node::insertChild(Node* child)
{
	childs.push_back(child);
	childs = RemoveNullPtr(childs);

	std::sort(childs.begin(), childs.end(), [](Node* a, Node* b) {
		return b->getValue() > a->getValue();
		});

	fixChild();
}

std::vector<Node*> RemoveNullPtr(std::vector<Node*> a)
{
	std::vector<Node*> result;
	for (int i = 0; i < (int)a.size(); i++)
	{
		if (a[i] != nullptr && a[i]->valueSize() > 0) result.push_back(a[i]);
	}
	return result;
}

void Node::fixChild()
{
	childs.resize(values.size() + 1, nullptr);
}
