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
	Node* iter = Root;
	while (iter != Leaf)
	{
		if (iter->iKey == _key)
			return iter;
		else if (iter->iKey > _key)
			iter = iter->LeftChild;
		else
			iter = iter->RightChild;
	}
	return nullptr;
}

RedBlackTree::iterator& RedBlackTree::begin()
{
	iterator* iter = new iterator;
	iter->tree = this;
	Node* leaf = Leaf;
	Node* node = Root;

	while (node->LeftChild != leaf)
		node = node->LeftChild;
	iter->node = node;

	return *iter;
}

RedBlackTree::iterator& RedBlackTree::end()
{
	iterator* iter = new iterator;
	iter->node = nullptr;
	iter->tree = this;

	return *iter;
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
		x->Parent->Color = COLOR::BLACK;
		x->Parent->Parent->Color = COLOR::RED;
		x = x->Parent->Parent;
		InsertFix(x);
		return;
	}
	// case2:새로 삽입한 노드가 부모노드의 오른쪽 자식인 경우
	if (IsRightChild(x->Parent) && IsLeftChild(x))
	{
		RightRotation(x);
		x = x->RightChild;
	}
	else if (IsLeftChild(x->Parent) && IsRightChild(x))
	{
		LeftRotation(x);
		x = x->LeftChild;
	}
	// case3:새로 삽입한 노드가 부모노드의 왼쪽 자식인 경우
	if (uncle(x) && uncle(x)->Color == COLOR::BLACK)
	{
		x->Parent->Color = COLOR::BLACK;
		grandparent(x)->Color = COLOR::RED;
		if (IsLeftChild(x->Parent))
			RightRotation(x->Parent);
		else
			LeftRotation(x->Parent);
	}
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
	if (n->Parent->Parent == nullptr)
		return nullptr;

	return n->Parent->Parent;
}

Node* RedBlackTree::uncle(Node* n)
{
	Node* node = grandparent(n);
	if ( node == nullptr)
		return nullptr;
	if (node->LeftChild == n->Parent)
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

int RedBlackTree::iterator::operator*()
{
	return node->iKey;
}

RedBlackTree::iterator& RedBlackTree::iterator::operator++()
{
	Node* nPtr = this->node;
	Node* leaf = tree->Leaf;
	// #1 오른쪽 자식이 있음 
	if (nPtr->RightChild != leaf)
	{
		nPtr = nPtr->RightChild;
		while (nPtr->LeftChild != leaf)
		{
			nPtr = nPtr->LeftChild;
		}
		this->node = nPtr;
	}
	else if (nPtr->Parent == nullptr) // #2 오른쪽 자식이 없고 부모도 없음
	{
		this->node = nullptr;
	}
	else if (tree->IsLeftChild(nPtr)) //  부모의 왼쪽
	{
		nPtr = nPtr->Parent;
		this->node = nPtr;
	}
	else // 부모의 오른쪽 자식이고 오른쪽 자식이 없음
	{
		while (true)
		{
			nPtr = nPtr->Parent;
			if (nPtr->Parent == nullptr)
			{
				this->node = nullptr;
				break;
			}
			if (tree->IsLeftChild(nPtr))
			{
				nPtr = nPtr->Parent;
				this->node = nPtr;
				break;
			}	
		}
	}

	return *this;
}

RedBlackTree::iterator& RedBlackTree::iterator::operator--()
{


	return *this;
}

bool RedBlackTree::iterator::operator==(const iterator& _other)
{
	if (_other.node == node && _other.tree == tree)
		return true;
	return false;
}

bool RedBlackTree::iterator::operator!=(const iterator& _other)
{
	if (_other.node != node || _other.tree != tree)
		return true;
	return false;
}


RedBlackTree::iterator::iterator()
	:node(nullptr)
	,tree(nullptr)
{
}

RedBlackTree::iterator::~iterator()
{
}
