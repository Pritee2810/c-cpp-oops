/*#include<iostream>
using namespace std;
//class Template
template <class T>
class Stack {
public:
	int top;
	T* p;
	int size;

	Stack(int);
	~Stack();
	void push(T);
	T pop();
};

template <class T>
Stack<T>::Stack(int value) {
	size = value;
	top = -1;
	p = new T[size];
}
template<class T>
Stack<T>::~Stack() {
	delete[]p;
}
template<class T>
void Stack<T>::push(T no) {
	if (top == (size - 1)) {
		return;
	}
	p[++top] = no;
}
template<class T>
T Stack<T>::pop() {
	if (top == -1) {
		return -1;
	}
	return p[top--];
}

int main() {
	Stack<float> sobj1(5);
	Stack<char> sobj2(5);

	sobj1.push(3.14f);
	sobj1.push(25.6f);
	sobj1.push(9.8f);

	sobj2.push('A');
	sobj2.push('B');
	sobj2.push('C');

	cout << sobj1.pop() << endl;
	cout << sobj1.pop() << endl;
	cout << sobj1.pop() << endl;

	cout << sobj2.pop() << endl;
	cout << sobj2.pop() << endl;
	cout << sobj2.pop() << endl;
	return 0; 
}*/