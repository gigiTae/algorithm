#pragma once
//https://gist.github.com/gowoonsori/a725e29ef1880f0592fe5760f4908c6b 레드블랙트리 코드

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
	void RightRotation();
	void LeftRotation();

public:
	RedBlackTree();
	~RedBlackTree();

};

