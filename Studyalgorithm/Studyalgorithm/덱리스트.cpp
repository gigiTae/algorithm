//#include<iostream>
//
//using namespace std;
//
//struct Node
//{
//	Node* nextnode;
//	Node* prevnode;
//	int inumber;
//};
//
//class deque
//{
//private:
//	Node* m_firstnode;
//	Node* m_finalnode;
//	int m_isize;
//
//public:
//
//	//push_front X : ���� X�� ���� �տ� �ִ´�.
//	void push_front(int num)
//	{
//		Node* node = new Node;
//		node->inumber = num;
//		if (m_isize == 0)
//		{
//			m_firstnode = node;
//			m_finalnode = node;
//		}
//		else
//		{
//			node->nextnode = m_firstnode;
//			m_firstnode->prevnode = node;
//			m_firstnode = node;
//		}
//		++m_isize;
//	}
//	//	push_back X : ���� X�� ���� �ڿ� �ִ´�.
//	void push_back(int num)
//	{
//		Node* node = new Node;
//		node->inumber = num;
//		if (m_isize == 0)
//		{
//			m_firstnode = node;
//			m_finalnode = node;
//		}
//		else
//		{
//			m_finalnode->nextnode = node;
//			node->prevnode = m_finalnode;
//			m_finalnode = node;
//		}
//		++m_isize;
//	}
//	//	pop_front : ���� ���� �տ� �ִ� ���� ����, �� ���� ����Ѵ�.����, ���� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
//	int pop_front()
//	{
//		int num = 0;
//		if (m_isize == 0)
//			return -1;
//		else if (m_isize == 1)
//		{
//			num = m_firstnode->inumber;
//			delete m_firstnode;
//			m_finalnode = nullptr;
//			m_firstnode = nullptr;
//		}
//		else
//		{
//			num = m_firstnode->inumber;
//			Node* deletenode = m_firstnode;
//			m_firstnode = m_firstnode->nextnode;
//			m_firstnode->prevnode = nullptr;
//			delete deletenode;
//		}
//		--m_isize;
//		return num;
//	}
//	//	pop_back : ���� ���� �ڿ� �ִ� ���� ����, �� ���� ����Ѵ�.����, ���� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
//	int pop_back()
//	{
//		int num = 0;
//		if (m_isize == 0)
//			return -1;
//		else if (m_isize == 1)
//		{
//			num = m_finalnode->inumber;
//			delete m_finalnode;
//			m_finalnode = nullptr;
//			m_firstnode = nullptr;
//		}
//		else
//		{
//			num = m_finalnode->inumber;
//			Node* deletenode = m_finalnode;
//			m_finalnode = m_finalnode->prevnode;
//			m_finalnode->nextnode = nullptr;
//			delete deletenode;
//		}
//		--m_isize;
//		return num;
//	}
//	//	size : ���� ����ִ� ������ ������ ����Ѵ�.
//	int size()
//	{
//		return m_isize;
//	}
//	//	empty : ���� ��������� 1��, �ƴϸ� 0�� ����Ѵ�.
//	bool empty()
//	{
//		if (m_isize == 0)
//			return true;
//		return false;
//	}
//	//	front : ���� ���� �տ� �ִ� ������ ����Ѵ�.���� ���� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
//	int front()
//	{
//		if (m_isize == 0)
//			return -1;
//		return m_firstnode->inumber;
//	}
//	//	back : ���� ���� �ڿ� �ִ� ������ ����Ѵ�.���� ���� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
//	int back()
//	{
//		if (m_isize == 0)
//			return -1;
//		return m_finalnode->inumber;
//	}
//
//	deque()
//		:m_isize(0)
//		, m_finalnode(nullptr)
//		, m_firstnode(nullptr)
//	{}
//	~deque()
//	{
//
//	}
//};
//
