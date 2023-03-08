#include "RedBlackTree.h"

Node::Node()
	:iKey(0)
	, Color(COLOR::RED) // ó�� ���� ���������� ����
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
	Node* node = new Node;
	node->Color = COLOR::RED;
	node->iKey = _key;
	node->LeftChild = Leaf;
	node->RightChild = Leaf;

	// ó������ ��尡 ����
	if (Root == nullptr)
	{
		Root = node;
		node->Color = COLOR::BLACK; // #1 ��Ʈ���� �������̴�
		return;
	}

	Node* iter = Root;
	while (true)
	{
		if (iter->iKey > _key)
		{
			if (iter->LeftChild == Leaf) // �����ڽ��� ����
			{
				iter->LeftChild = node;
				node->Parent = iter;
				break;
			}
			else
				iter = iter->LeftChild;
		}
		else
		{
			if (iter->RightChild == Leaf)
			{
				iter->RightChild = node;
				node->Parent = iter;
				break;
			}
			else
				iter = iter->RightChild;
		}
	}

	InsertFix(node);

	return;
}

Node* RedBlackTree::find(int _key)
{
	return nullptr;
}

void RedBlackTree::RightRotation(Node* x)
{
	Node* g = grandparent(x);
	Node* p = x->Parent;

	// ������ ��尡 �����ϸ�
	if (x->RightChild != Leaf)
		x->RightChild->Parent = p;
	p->LeftChild = x->RightChild;

	x->RightChild = p; 
	p->Parent = x;
	x->Parent = g;

	if (g == nullptr)  // p �� ��Ʈ����̴� 
	{
		Root = x;
		x->Color = COLOR::BLACK;
	}
	else 
	{
		if (g->LeftChild == p)
			g->LeftChild = x;
		else
			g->RightChild = x;
	}

}

void RedBlackTree::LeftRotation(Node* x)
{
	Node* g = grandparent(x);
	Node* p = x->Parent;

	// ������ ��尡 �����ϸ�
	if (x->LeftChild != Leaf)
		x->LeftChild->Parent = p;
	p->RightChild = x->LeftChild;

	x->LeftChild = p;
	p->Parent = x;
	x->Parent = g;

	if (g == nullptr)  // p �� ��Ʈ����̴� 
	{
		Root = x;
		x->Color = COLOR::BLACK;
	}
	else
	{
		if (g->LeftChild == p)
			g->LeftChild = x;
		else
			g->RightChild = x;
	}

}

void RedBlackTree::InsertFix(Node* x)
{
	// Root ��� 
	if (x->Parent == nullptr)
	{
		x->Color = COLOR::BLACK;
		return;
	}
	// ��Ģ����
	if (x->Color != x->Parent->Color)
		return;

	Node* u = uncle(x);
	// case1:���� ��尡 RED�� ���
	if (u->Color == COLOR::RED)
	{
		u->Color = COLOR::BLACK;
		x->Color = COLOR::BLACK;

		x->Parent->Color == COLOR::RED;
		InsertFix(x->Parent);
		return;
	}
	if (IsRightChild(x)) // case2:���� ������ ��尡 �θ����� ������ �ڽ��� ���
	{
		if (IsLeftChild(x->Parent))
		{
			LeftRotation(x->Parent);           
		}
		else
		{
			RightRotation(x->Parent);
		}
	}
	// case3:���� ������ ��尡 �θ����� ���� �ڽ��� ���
	x->Parent->Color = COLOR::BLACK;
	grandparent(x)->Color = COLOR::RED;
	if (IsLeftChild(x->Parent))
		RightRotation(x->Parent);
	else
		LeftRotation(x->Parent);
}

bool RedBlackTree::IsLeftChild(Node* x)
{
	Node* p = x->Parent;
	if (p == nullptr)
		return false;

	if (p->LeftChild == x)
		return true;

	return false;
}

bool RedBlackTree::IsRightChild(Node* x)
{
	Node* p = x->Parent;
	if (p == nullptr)
		return false;

	if (p->RightChild == x)
		return true;

	return false;
}

Node* RedBlackTree::grandparent(Node* n)
{
	if (n->Parent == nullptr)
		return nullptr;

	return n->Parent;
}

Node* RedBlackTree::uncle(Node* n)
{
	Node* node = grandparent(n);
	if ( node == nullptr)
		return nullptr;
	if (node->LeftChild == n)
		return node->RightChild;
	else
		return node->LeftChild;
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
