#pragma once
#include <iostream>
using namespace std;
#include "NodeData.h"

template<typename T>
class LinkedList
{
protected:
	NodeData<T>* p_head_;
public:
	LinkedList();
	~LinkedList();
	void PrintList(NodeData<T>* node);
	void InsertFront(T val);	
	void DeleteNode(int position);
	void Update(T val, int pos);
	NodeData<T>* head();
};

template<typename T>
inline LinkedList<T>::LinkedList()
	:p_head_(NULL)
{

}

template<typename T>
inline LinkedList<T>::~LinkedList()
{

}

template<typename T>
inline void LinkedList<T>::PrintList(NodeData<T> *temp)
{
		cout << "\n" << endl;
		while (temp != NULL)
		{
			temp->get_data().print();
			temp = temp->get_next();
		}
}

template<typename T>
inline void LinkedList<T>::InsertFront(T val)
{
	NodeData<T>* temp = new NodeData<T>();
	temp->set_data(val);
	temp->set_next(p_head_);
	p_head_ = temp;
}


template<typename T>
inline void LinkedList<T>::DeleteNode(int position)
{
	if (p_head_ == NULL)
	{
		cout << "\t\t\t\t\t\t\t";
		cout << "List is empty" << endl;
		return;
	}

	NodeData<T>* temp = p_head_;

	if (position == 0)
	{
		p_head_ = temp->get_next();   
		free(temp);               
		return;
	}

	for (int i = 0; temp != NULL && i < position - 1; i++)
		temp = temp->get_next();
 
	if (temp == NULL || temp->get_next() == NULL)
		return;

	NodeData<T>* next_ = temp->get_next()->get_next();
	free(temp->get_next());   

	temp->set_next(next_);   
}

template<typename T>
inline void LinkedList<T>::Update(T val, int pos)
{

	int i;
	if (p_head_ == NULL)
	{
		cout << "\t\t\t\t\t\t\t";
		cout << "List is empty" << endl;
		return;
	}

	NodeData<T>* s;
	s = p_head_;
	if (pos == 1)
	{
		p_head_->set_data(val);
	}
	else
	{
		for (i = 0; i < pos ; i++)
		{
			if (s == NULL)
			{
				cout << "\t\t\t\t\t\t\t";
				cout << "There are less than " << pos << " elements";
				return;
			}
			s = s->get_next();
		}
		s->set_data(val);
	}
	cout << "\t\t\t\t\t\t\t";
	cout << "Node Updated" << endl;
}

template<typename T>
inline NodeData<T>* LinkedList<T>::head()
{
	return p_head_;
}


