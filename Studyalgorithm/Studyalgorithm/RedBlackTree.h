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
	public:
		class iterator;
	private:
		Node* Root;
		Node* Leaf;
	public:
		void insert(int _key);

		iterator& erase(iterator& iter);
		iterator& find(int _key);
		iterator& begin();
		iterator& rbegin();
		iterator& end();

	public:
		void Print();

	private:
		void RightRotation(Node* x);
		void LeftRotation(Node* x);

		void InsertFix(Node* x);
		void EraseFix(Node* x);

		bool IsRightChild(Node* x);
		bool IsLeftChild(Node* x);
	
	private:
		Node* grandparent(const Node* n);
		Node* uncle(const Node* n);

	public:
		class iterator
		{
		private:
			Node* node;
			RedBlackTree* tree;

		public:
			int operator *();
			iterator& operator++();
			iterator& operator--();
			bool operator ==(const iterator &_other);
			bool operator !=(const iterator &_other);


		public:
			iterator();
			iterator(const iterator& _other);

			~iterator();

			friend class RedBlackTree;
		};

	public:
		RedBlackTree();
		~RedBlackTree();

		friend class iterator;
	};

