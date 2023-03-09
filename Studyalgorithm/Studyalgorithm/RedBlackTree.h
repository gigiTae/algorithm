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
		Node* find(int _key);
		iterator& begin();
		iterator& end();

	private:
		void RightRotation(Node* x);
		void LeftRotation(Node* x);
		void InsertFix(Node* x);
		bool IsRightChild(Node* x);
		bool IsLeftChild(Node* x);
	
	private:
		Node* grandparent(Node* n);
		Node* uncle(Node* n);

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
			~iterator();

			friend class RedBlackTree;
		};

	public:
		RedBlackTree();
		~RedBlackTree();

		friend class iterator;
	};

