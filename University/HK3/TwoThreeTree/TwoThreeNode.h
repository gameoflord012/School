#pragma once
class Node
{
public:
	enum
	{
		EMPTY_VALUE = -1
	};

	int leftValue, rightValue;
	Node *fistChild, *secondChild, *thirdChild;

	Node(int);
	bool IsTwoChild();
	void DeleteRightValue();
};

