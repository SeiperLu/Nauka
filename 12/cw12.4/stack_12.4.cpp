#include "Stack_12.4.h"
#include <iostream>
Stack::Stack(int n)
{
	top = 0;
	size = n;
	pitems = new Item[size];
}

Stack::Stack(const Stack& st)
{
	delete[] pitems;
	top = st.top;
	size = st.size;
	std::memcpy(pitems, st.pitems, sizeof(Item) * top);
}

Stack::~Stack()
{
	delete[] pitems;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == size;
}

bool Stack::push(const Item& item)
{
	if (top < size)
	{
		pitems[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item& item)
{
	if (top > 0)
	{
		item = pitems[--top];
		return true;
	}
	else
		return false;
}

Stack& Stack::operator=(const Stack& st)
{
	if (this == &st)
	{
		return *this;
	}
		
	delete[] pitems;
	top = st.top;
	size = st.size;
	pitems = new Item[size];
	std::memcpy(pitems, st.pitems, sizeof(Item)*top);
	return *this;
}