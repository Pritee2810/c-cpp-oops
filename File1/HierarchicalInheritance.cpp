/*#include<iostream>
using namespace std;
class A {
public:
	int i;
	A() {
		cout << "A constructor" << endl;
	}
	~A() {
		cout << "A destructor" << endl;
	}
};
class B : public A {
public:
	int j;
	B() {
		cout << "B constructor" << endl;
	}
	~B() {
		cout << "B destructor" << endl;
	}
};
class C : public A {
public:
	int j;
	C() {
		cout << "C constructor" << endl;
	}
	~C() {
		cout << "C destructor" << endl;
	}
};
class D : public B {
public:
	int j;
	D() {
		cout << "D constructor" << endl;
	}
	~D() {
		cout << "D destructor" << endl;
	}
};
class E : public B {
public:
	int j;
	E() {
		cout << "E constructor" << endl;
	}
	~E() {
		cout << "E destructor" << endl;
	}
};
class F : public C {
public:
	int j;
	F() {
		cout << "F constructor" << endl;
	}
	~F() {
		cout << "F destructor" << endl;
	}
};
int main() {
	F fobj;
	D dobj;
	return 0;
}*/