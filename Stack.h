#ifndef STACK_H
#define STACK_H

const int MaxSize = 10;

template <class MyData>
class Stack {
public:
	Stack();
	~Stack();
	void Push(MyData);
	void Pop();
	MyData TopStack();
	bool Underflow();
	bool Overflow();

private:
	int Top;
	MyData MyArray[MaxSize];


};
#endif

template <class MyData>
Stack<MyData>::Stack()
{
	Top = -1;
}

template<class MyData>
Stack<MyData>::~Stack()
{}

template<class MyData>
void Stack<MyData>::Push(MyData item)
{
	Top++;
	MyArray[Top] = item;
}

template<class MyData>
void Stack<MyData>::Pop()
{
	Top--;
}

template<class MyData>
MyData Stack<MyData>::TopStack()
{
	return MyArray[Top];
}

template<class MyData>
bool Stack<MyData>::Underflow()
{
	return (Top == -1);
}

template<class MyData>
bool Stack<MyData>::Overflow()
{
	return(Top == MaxSize - 1);
}
