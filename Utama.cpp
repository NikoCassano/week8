#include <iostream>
#include "Stack.h"
using namespace std;

void main() {
	Stack<char> StackItem;
	char item;
	bool full = false;

	do {
		cout << "\nEnter data : ";
		cin >> item;
		if (!StackItem.Overflow()) {
			cout << "Push item " << item << " now\n";
			StackItem.Push(item);

		}
		else {
			cout << "\nStack is full : Cant push item" << item << endl;
			full = true;
		}
	} while (!full);
	cout << "\nNow we will top and pop the stack \n";
	while (!StackItem.Underflow()) {
		cout << "\nTop is " << StackItem.TopStack() << "  ";
		cout << "pop the stack now ";
		StackItem.Pop();
	};
	if (!StackItem.Underflow()) {
		cout << "\nStack is empty, cant top and pop this stack\n";
	}
	cout << endl;
}
