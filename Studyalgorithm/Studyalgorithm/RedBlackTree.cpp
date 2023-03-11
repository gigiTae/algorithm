#include "RedBlackTree.h"
#include <iostream>
#include <assert.h>

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
	if (Root == nullptr)
		return end();

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
	iterator* iter = new iterator;
	iter->node = nullptr;
	iter->tree = this;
	return *iter;
}

void RedBlackTree::Print()
{
	for (auto iter = begin(); iter != end(); ++iter)
	{
		std::cout << *iter << ' ';
	}
	std::cout << '\n';
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


RedBlackTree::iterator& RedBlackTree::erase(iterator& iter) // 반환값은 중위후속자이다.
{
	Node* iNode = iter.node;
	iterator Returniter = iter;    // 리턴 이터레이터
	bool IsBlack = false;          // 삭제한 노드의 색깔 false : RED ture: BLACK

	iterator Successoriter = iter; // 중위 후속자
	++Successoriter;
	Node* Successor = Successoriter.node;

	// 삭제할 노드가 자식이 없는 경우
	if (iNode->LeftChild == Leaf && iNode->RightChild == Leaf)
	{
		if (iNode->Parent != nullptr)
		{
			Node* DoubleBlack = new Node;
			DoubleBlack->Color = COLOR::BLACK;
			DoubleBlack->Parent = iNode->Parent;
			if (IsLeftChild(iNode))
				iNode->Parent->LeftChild = DoubleBlack;
			else
				iNode->Parent->RightChild = DoubleBlack;
			Returniter.node = DoubleBlack;


			if (iNode->Color == COLOR::BLACK)
			{
				EraseFix(Returniter.node);
			}
			else
			{
				if (IsLeftChild(DoubleBlack))
					DoubleBlack->Parent->LeftChild = Leaf;
				else
					DoubleBlack->Parent->RightChild = Leaf;

				delete DoubleBlack;
			}
			return Successoriter;
		}
		else
		{
			// 루트노드인 경우
			iter.tree->Root = nullptr;
			Returniter.node = nullptr;
		}
		if (iNode->Color == COLOR::BLACK)
			IsBlack = true;
		delete iNode;
	}
	// 삭제할 노드가 2개의 자식을 가진 경우
	else if (iNode->LeftChild != Leaf && iNode->RightChild != Leaf)
	{
		iNode->iKey = Successor->iKey;
		iNode->Color = Successor->Color;

		if (Successor->LeftChild == Leaf && Successor->RightChild == Leaf) // 리프 노드
		{
			if (IsLeftChild(Successor))
				Successor->Parent->LeftChild = Leaf;
			else
				Successor->Parent->RightChild = Leaf;
		}
		else if (Successor->LeftChild != Leaf) // 왼쪽 자식을 가짐
		{
			if (IsLeftChild(Successor))
				Successor->Parent->LeftChild = Successor->LeftChild;
			else
				Successor->Parent->RightChild = Successor->LeftChild;
		}
		else // 오른쪽 자식을 가짐
		{
			if (IsLeftChild(Successor)) 
				Successor->Parent->LeftChild = Successor->RightChild;
			else
				Successor->Parent->RightChild = Successor->RightChild;
		}
		if (Successor->Color == COLOR::BLACK)
			IsBlack = true;
		delete Successor;
	}
	else // 자식노드를 한개 가진 경우
	{
		Node* Child;
		if (iNode->LeftChild == Leaf)
			Child = iNode->RightChild;
		else
			Child = iNode->LeftChild;
		if (iNode->Parent != nullptr)
		{
			Child->Parent = iNode->Parent;
			if (IsLeftChild(iNode))
				iNode->Parent->LeftChild = Child;
			else
				iNode->Parent->RightChild = Child;
		}
		else
		{
			Child->Parent = nullptr;
			Root = Child;
		}
		if (iNode->Color == COLOR::BLACK)
			IsBlack = true;
		delete iNode;
		Returniter.node = Child;
	}

	if (IsBlack == true)
		EraseFix(Returniter.node);

	return Returniter;
}

void RedBlackTree::EraseFix(Node* x)
{
	if (x == nullptr) // end이면 반환
	{
		return;
	}
	else if (x->Color == COLOR::RED || x->Parent == nullptr)// 대체된 자리를 검은색으로 칠한다.
	{
		x->Color = COLOR::BLACK;
		return;
	}
	bool LeftChild = IsLeftChild(x); 
	Node* Sibling; // 형제노드
	if (LeftChild == true)
		Sibling = x->Parent->RightChild;
	else
		Sibling = x->Parent->LeftChild;
	
	// Case Change
	if (Sibling->Color == COLOR::RED)
	{
		Node* Parent = x->Parent;
		Sibling->Color = COLOR::BLACK;
		x->Parent->Color = COLOR::RED;

		if (LeftChild == true)
			LeftRotation(Sibling);
		else
			RightRotation(Sibling);

		if (LeftChild == true)
			Sibling = x->Parent->RightChild;
		else
			Sibling = x->Parent->LeftChild;
	}
	// Case A
	if (Sibling->LeftChild->Color == COLOR::BLACK && Sibling->RightChild->Color ==COLOR::BLACK)
	{
		Sibling->Color = COLOR::RED;
		if (x->Parent->Color == COLOR::RED)
			x->Parent->Color = COLOR::BLACK;
		else
			EraseFix(x->Parent);
	}
	// Case B
	else if (Sibling->LeftChild->Color == COLOR::RED && Sibling->RightChild->Color == COLOR::BLACK && 
		LeftChild == true)
	{
		Sibling->Color = COLOR::RED;
		Sibling->LeftChild->Color = COLOR::BLACK;
		RightRotation(Sibling->LeftChild);
	}
	else if (Sibling->RightChild->Color == COLOR::RED && Sibling->LeftChild->Color == COLOR::BLACK &&
		LeftChild == false)
	{
		Sibling->Color = COLOR::RED;
		Sibling->RightChild->Color = COLOR::BLACK;
		LeftRotation(Sibling->RightChild);
	}
	// Case C
	else if (LeftChild == true && Sibling->RightChild->Color == COLOR::RED)
	{
		Sibling->Color = x->Parent->Color;
		Sibling->RightChild->Color = COLOR::BLACK;
		x->Parent->Color = COLOR::BLACK;
		LeftRotation(Sibling);
	}
	else if (LeftChild == false && Sibling->LeftChild->Color == COLOR::RED)
	{
		Sibling->Color = x->Parent->Color;
		Sibling->LeftChild->Color = COLOR::BLACK;
		x->Parent->Color = COLOR::BLACK;
		RightRotation(Sibling);
	}

	if (x->LeftChild == nullptr) 
	{
		if (IsLeftChild(x))
			x->Parent->LeftChild = Leaf;
		else
			x->Parent->RightChild = Leaf;
		delete x;
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
	else // 부모의 오른쪽 자식이고 오른쪽 자식이 없음
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
	Node* nPtr = this->node;
	Node* leaf = tree->Leaf;
	// #0 end iterator 인 경우 
	if (nPtr == nullptr)
		return tree->rbegin();
	// #1 왼쪽자식
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

RedBlackTree::iterator::iterator(const iterator& _other)
{
	node = _other.node;
	tree = _other.tree;
}

RedBlackTree::iterator::~iterator()
{
	
}
