#include "TwoThreeNode.h"

Node::Node(int leftValue)
{
	this->leftValue = leftValue;
	rightValue = EMPTY_VALUE;
	fistChild = secondChild = thirdChild = nullptr;
}

bool Node::IsTwoChild()
{

	return rightValue == EMPTY_VALUE;
}

void Node::DeleteRightValue()
{
	rightValue = Node::EMPTY_VALUE;
}
