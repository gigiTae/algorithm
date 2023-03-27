
#include <iostream>

using namespace std;

struct Node
{
	int number;
	Node* parent;
	Node* leftchild;
	Node* rightchild;

	Node(int num)
		:number(num), parent(nullptr), leftchild(nullptr), rightchild(nullptr)
	{}

	bool IsRightChild() {
		if (parent == nullptr)
			return false;
		if (parent->rightchild == this)
			return true;
		return false;
	}
};

// 후위순회
void PostorderTraversal(Node* node)
{
	if (node->leftchild != nullptr)
		PostorderTraversal(node->leftchild);
	if (node->rightchild != nullptr)
		PostorderTraversal(node->rightchild);
	cout << node->number<< '\n';
}


int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int index;
	cin >> index;
	Node* RootNode = new Node(index);

	Node* PrevNode = RootNode;
	int num;
	while (true)
	{
		cin >> num;
		if (num == EOF) break;
		Node* node = new Node(num);
		if (PrevNode->number > num) {
			node->parent = PrevNode;
			PrevNode->leftchild = node;
			PrevNode = node;
			continue;
		}

		Node* tmpnode = PrevNode;
		while (tmpnode->IsRightChild()){
			tmpnode = tmpnode->parent;
		}
		if (tmpnode->parent == nullptr ) {
			PrevNode->rightchild = node;
			node->parent = PrevNode;
			PrevNode = node;
			continue;
		}
		if (PrevNode->number < num && num < tmpnode->parent->number) {
			PrevNode->rightchild = node;
			node->parent = PrevNode;
			PrevNode = node;
			continue;
		}
		while (tmpnode->parent != nullptr && tmpnode->parent->number < num) {
			tmpnode = tmpnode->parent;
		}
		
		tmpnode->rightchild = node;
		node->parent = tmpnode->parent;
		PrevNode = node;
	}

	PostorderTraversal(RootNode);
}