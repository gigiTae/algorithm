#include<iostream>


using namespace std;

template <typename T>
struct node
{
	node* nextnode;
	T number;

public:
	node()
		: nextnode(nullptr)
		, number(0)
	{}
public:
	~node()
	{}
};

template <typename T>
class queue
{
private:
	node<T>* m_firstnode;
	node<T>* m_endnode;
	int m_size;

public:
	void push(T number)
	{
		node<T>* list = new node<T>;
		list->number = number;
		if (m_size == 0)
		{
			m_firstnode = list;
			m_endnode = list;
		}
		else
		{
			m_endnode->nextnode = list;
			m_endnode = list;
		}
		++m_size;
	}

	T pop()
	{
		if (m_size == 0)
			return -1;
		T number = m_firstnode->number;
		node<T>* next = m_firstnode->nextnode;
		delete m_firstnode;
		m_firstnode = next;
		--m_size;
		return number;
	}

	int size()
	{
		return m_size;
	}

	bool empty()
	{
		if (m_size == 0)
			return 1;
		return 0;
	}
	T front()
	{
		if (m_size == 0)
			return -1;
		return m_firstnode->number;
	}
	T back()
	{
		if (m_size == 0)
			return -1;
		return m_endnode->number;
	}

	queue()
		:m_endnode(nullptr)
		, m_firstnode(nullptr)
		, m_size(0)
	{}
	~queue()
	{
		while (m_firstnode != nullptr)
		{
			node<T>* next = m_firstnode->nextnode;
			delete m_firstnode;
			m_firstnode = next;
		}
	}
};
