	//#pragma once

	//enum class COLOR
	//{
	//	BLACK,
	//	RED,
	//};

	//struct Info
	//{
	//	int iKey;
	//	COLOR Color;
	//	Info* Parent;
	//	Info* LeftChild;
	//	Info* RightChild;
	//	
	//	Info();
	//	~Info();
	//};

	//class RedBlackTree
	//{
	//public:
	//	class iterator;
	//private:
	//	Info* Root;
	//	Info* Leaf;
	//public:
	//	void insert(int _key);

	//	iterator& erase(iterator& iter);
	//	iterator& find(int _key);
	//	iterator& begin();
	//	iterator& rbegin(); // 원래의 rbegin 은 아마도 riterator가 있을것이다.
	//	iterator& end();

	//public:
	//	void Print();

	//private:
	//	void RightRotation(Info* x);
	//	void LeftRotation(Info* x);

	//	void InsertFix(Info* x);
	//	void EraseFix(Info* x);

	//	bool IsRightChild(Info* x);
	//	bool IsLeftChild(Info* x);
	//
	//private:
	//	Info* grandparent(const Info* n);
	//	Info* uncle(const Info* n);

	//public:
	//	class iterator
	//	{
	//	private:
	//		Info* node;
	//		RedBlackTree* tree;

	//	public:
	//		int operator *();
	//		iterator& operator++();
	//		iterator& operator--();
	//		bool operator ==(const iterator &_other);
	//		bool operator !=(const iterator &_other);


	//	public:
	//		iterator();
	//		iterator(const iterator& _other);

	//		~iterator();

	//		friend class RedBlackTree;
	//	};

	//public:
	//	RedBlackTree();
	//	~RedBlackTree();

	//	friend class iterator;
	//};

