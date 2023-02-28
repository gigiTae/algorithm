//#include<iostream>
//
//
//using namespace std;
//
//template <typename T>
//struct Node
//{
//	Node* NextNode;
//	T Number;
//
//public:
//	Node()
//		: NextNode(nullptr)
//		, Number(0)
//	{}
//public:
//	~Node()
//	{}
//};
//
//template <typename T>
//class Queue
//{
//private:
//	Node<T>* m_FirstNode;
//	Node<T>* m_EndNode;
//	int m_Size;
//
//public:
//	void push(T number)
//	{
//		Node<T>* list = new Node<T>;
//		list->Number = number;
//		if (m_Size == 0)
//		{
//			m_FirstNode = list;
//			m_EndNode = list;
//		}
//		else
//		{
//			m_EndNode->NextNode = list;
//			m_EndNode = list;
//		}
//		++m_Size;
//	}
//
//	T pop()
//	{
//		if (m_Size == 0)
//			return -1;
//		T number = m_FirstNode->Number;
//		Node<T>* next = m_FirstNode->NextNode;
//		delete m_FirstNode;
//		m_FirstNode = next;
//		--m_Size;
//		return number;
//	}
//
//	int size()
//	{
//		return m_Size;
//	}
//
//	bool empty()
//	{
//		if (m_Size == 0)
//			return 1;
//		return 0;
//	}
//	T front()
//	{
//		if (m_Size == 0)
//			return -1;
//		return m_FirstNode->Number;
//	}
//	T back()
//	{
//		if (m_Size == 0)
//			return -1;
//		return m_EndNode->Number;
//	}
//
//	Queue()
//		:m_EndNode(nullptr)
//		, m_FirstNode(nullptr)
//		, m_Size(0)
//	{}
//	~Queue()
//	{
//		while (m_FirstNode != nullptr)
//		{
//			Node<T>* Next = m_FirstNode->NextNode;
//			delete m_FirstNode;
//			m_FirstNode = Next;
//		}
//	}
//};
