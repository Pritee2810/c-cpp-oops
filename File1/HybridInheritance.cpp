/*#include<iostream>
using namespace std;
class A {
public:
	int i;
	A() {
		cout << "A constructor\n";
	}
	~A() {
		cout << "A destructor\n";
	}
};
class B : public A {
public:
	int x;
	B() {
		cout << "B constructor\n";
	}
	~B() {
		cout << "B destructor\n";
	}
};
class E {
public:
	int j;
	E() {
		cout << "E constructor\n";
	}
	~E() {
		cout << "E destructor\n";
	}
};
class F {
public:
	int k;
	F() {
		cout << "F constructor\n";
	}
	~F() {
		cout << "F destructor\n";
	}
};
class C : public E, F {
public:
	int x;
	C() {
		cout << "C constructor\n";
	}
	~C() {
		cout << "C destructor\n";
	}
};
class D : public B, C {
public:
	int x;
	D() {
		cout << "D constructor\n";
	}
	~D() {
		cout << "D destructor\n";
	}
};


int main() {
	//D dobj;
	cout << "------------" << endl;
	C cobj;
	return 0;
}*/