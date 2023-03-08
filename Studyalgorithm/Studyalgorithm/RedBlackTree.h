#pragma once

enum class COLOR
{
	BLACK,
	RED,
};

struct Node
{
	int iKey;
	COLOR Color;
	Node* Parent;
	Node* LeftChild;
	Node* RightChild;

	Node();
	~Node();
};

class RedBlackTree
{
private:
	Node* Root;
	Node* Leaf;
public:
	void insert(int _key);
	Node* find(int _key);

private:
	void RightRotation(Node* x);
	void LeftRotation(Node* x);
	void InsertFix(Node* x);
	bool IsLeftChild(Node* x);
	bool IsRightChild(Node* x);
public:
	Node* grandparent(Node* n);
	Node* uncle(Node* n);

public:
	RedBlackTree();
	~RedBlackTree();

};

