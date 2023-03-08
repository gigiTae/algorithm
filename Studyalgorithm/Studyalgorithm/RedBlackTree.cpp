#include "RedBlackTree.h"

Node::Node()
	:iKey(0)
	, Color(COLOR::RED) // 처음 노드는 빨간색으로 시작
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

	// 처음으로 노드가 들어옴
	if (Root == nullptr)
	{
		Root = node;
		node->Color = COLOR::BLACK; // #1 루트노드는 검정색이다
		return;
	}

	Node* iter = Root;
	while (true)
	{
		if (iter->iKey > _key)
		{
			if (iter->LeftChild == Leaf) // 왼쪽자식이 리프
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

	// 오른쪽 노드가 존재하면
	if (x->RightChild != Leaf)
		x->RightChild->Parent = p;
	p->LeftChild = x->RightChild;

	x->RightChild = p; 
	p->Parent = x;
	x->Parent = g;

	if (g == nullptr)  // p 가 루트노드이다 
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

	// 오른쪽 노드가 존재하면
	if (x->LeftChild != Leaf)
		x->LeftChild->Parent = p;
	p->RightChild = x->LeftChild;

	x->LeftChild = p;
	p->Parent = x;
	x->Parent = g;

	if (g == nullptr)  // p 가 루트노드이다 
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
	// Root 노드 
	if (x->Parent == nullptr)
	{
		x->Color = COLOR::BLACK;
		return;
	}
	// 규칙만족
	if (x->Color != x->Parent->Color)
		return;

	Node* u = uncle(x);
	// case1:삼촌 노드가 RED인 경우
	if (u->Color == COLOR::RED)
	{
		u->Color = COLOR::BLACK;
		x->Color = COLOR::BLACK;

		x->Parent->Color == COLOR::RED;
		InsertFix(x->Parent);
		return;
	}
	if (IsRightChild(x)) // case2:새로 삽입한 노드가 부모노드의 오른쪽 자식인 경우
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
	// case3:새로 삽입한 노드가 부모노드의 왼쪽 자식인 경우
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
