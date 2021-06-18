#pragma execution_character_set( "utf-8" )

#include <Windows.h>
#include "TwoThreeTree.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(65001);

	TwoThreeTree Tree;

	Tree.insert(100);
	Tree.insert(50);
	Tree.insert(10);
	Tree.insert(40);
	Tree.insert(90);
	Tree.insert(70);
	Tree.insert(20);
	Tree.insert(30);
	Tree.insert(60);
	Tree.insert(80);

	Tree.printTree();
}