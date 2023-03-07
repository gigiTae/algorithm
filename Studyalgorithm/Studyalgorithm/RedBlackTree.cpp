#include "RedBlackTree.h"

Node::Node()
	:iKey(0)
	, Color(COLOR::RED)
	, Parent(nullptr)
	, LeftChild(nullptr)
	, RightChild(nullptr)
{
}

Node::~Node()
{
}

void RedBlackTree::insert(int _key)
{

}

Node* RedBlackTree::find(int _key)
{
	return nullptr;
}

void RedBlackTree::RightRotation()
{

}

void RedBlackTree::LeftRotation()
{
}

RedBlackTree::RedBlackTree()
	:Root(nullptr)
{
	Leaf = new Node;
	Leaf->Color = COLOR::BLACK;
}

RedBlackTree::~RedBlackTree()
{
	delete Leaf;
}
