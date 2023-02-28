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
//	//push_front X : 정수 X를 덱의 앞에 넣는다.
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
//	//	push_back X : 정수 X를 덱의 뒤에 넣는다.
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
//	//	pop_front : 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다.만약, 덱에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
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
//	//	pop_back : 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다.만약, 덱에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
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
//	//	size : 덱에 들어있는 정수의 개수를 출력한다.
//	int size()
//	{
//		return m_isize;
//	}
//	//	empty : 덱이 비어있으면 1을, 아니면 0을 출력한다.
//	bool empty()
//	{
//		if (m_isize == 0)
//			return true;
//		return false;
//	}
//	//	front : 덱의 가장 앞에 있는 정수를 출력한다.만약 덱에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
//	int front()
//	{
//		if (m_isize == 0)
//			return -1;
//		return m_firstnode->inumber;
//	}
//	//	back : 덱의 가장 뒤에 있는 정수를 출력한다.만약 덱에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
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
