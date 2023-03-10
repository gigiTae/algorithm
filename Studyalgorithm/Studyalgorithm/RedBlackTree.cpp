#include "RedBlackTree.h"
#include <assert.h>

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

RedBlackTree::iterator& RedBlackTree::find(int _key)
{
	iterator* iter = new iterator;
	iter->tree = this;
	Node* nPtr = this->Root;
	while (nPtr != Leaf)
	{
		if (nPtr->iKey == _key)
		{
			iter->node = nPtr;
			return *iter;
		}
		else if (nPtr->iKey > _key)
			nPtr = nPtr->LeftChild;
		else
			nPtr = nPtr->RightChild;
	}
	nPtr = nullptr;
	iter->node = nullptr;
	return *iter;
}

RedBlackTree::iterator& RedBlackTree::begin()
{
	assert(Root);

	iterator* iter = new iterator;
	iter->tree = this;
	Node* leaf = Leaf;
	Node* node = Root;

	while (node->LeftChild != leaf)
		node = node->LeftChild;
	iter->node = node;

	return *iter;
}

RedBlackTree::iterator& RedBlackTree::rbegin()
{
	assert(Root);

	iterator* iter = new iterator;
	iter->tree = this;
	Node* leaf = Leaf;
	Node* node = Root;
	
	while (node->RightChild != leaf)
		node = node->RightChild;
	iter->node = node;

	return *iter;
}

RedBlackTree::iterator& RedBlackTree::end()
{
	assert(Root);
	iterator* iter = new iterator;
	iter->node = nullptr;
	iter->tree = this;
	return *iter;
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
		x->Parent->Color = COLOR::BLACK;
		x->Parent->Parent->Color = COLOR::RED;
		x = x->Parent->Parent;
		InsertFix(x);
		return;
	}
	// case2:���� ������ ��尡 �θ����� ������ �ڽ��� ���
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
	// case3:���� ������ ��尡 �θ����� ���� �ڽ��� ���
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

Node* RedBlackTree::grandparent(const Node* n)
{
	if (n->Parent->Parent == nullptr)
		return nullptr;

	return n->Parent->Parent;
}

Node* RedBlackTree::uncle(const Node* n)
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
	assert(node);
	return node->iKey;
}

RedBlackTree::iterator& RedBlackTree::iterator::operator++()
{
	Node* nPtr = this->node;
	assert(nPtr);
	Node* leaf = tree->Leaf;
	// #1 ������ �ڽ��� ���� 
	if (nPtr->RightChild != leaf)
	{
		nPtr = nPtr->RightChild;
		while (nPtr->LeftChild != leaf)
		{
			nPtr = nPtr->LeftChild;
		}
		this->node = nPtr;
	}
	else // �θ��� ������ �ڽ��̰� ������ �ڽ��� ����
	{
		while (true)
		{
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
			nPtr = nPtr->Parent;
		}
	}

	return *this;
}

RedBlackTree::iterator& RedBlackTree::iterator::operator--()
{
<<<<<<< Updated upstream
	Node* nPtr = this->node;
	Node* leaf = tree->Leaf;
	// #0 end iterator �� ��� 
	if (nPtr == nullptr)
		return tree->rbegin();
	// #1 �����ڽ�
	else if (nPtr->LeftChild != leaf)
	{
		nPtr = nPtr->LeftChild;
		while (nPtr->RightChild != leaf)
		{
			nPtr = nPtr->RightChild;
		}
		this->node = nPtr;
	}
	else
	{
		while (true)
		{
			if (nPtr->Parent == nullptr)
				assert(nullptr);
			if (tree->IsRightChild(nPtr))
			{
				nPtr = nPtr->Parent;
				this->node = nPtr;
				break;
			}
			nPtr = nPtr->Parent;
		}
	}
=======
>>>>>>> Stashed changes

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
