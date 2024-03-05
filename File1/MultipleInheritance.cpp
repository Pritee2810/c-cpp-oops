/*#include<iostream>
using namespace std;
class Base1 {
public:
	int i;
	Base1() {
		cout << "Base1 constructor\n";
	}
	~Base1() {
		cout << "Base1 destructor\n";
	}
};
class Base2 {
public:
	int j;
	Base2() {
		cout << "Base2 constructor\n";
	}
	~Base2() {
		cout << "Base2 destructor\n";
	}
};
class Base3 {
public:
	int k;
	Base3() {
		cout << "Base3 constructor\n";
	}
	~Base3() {
		cout << "Base3 destructor\n";
	}
};
class Derived : public Base2, Base3, Base1 {
public:
	int x;
	Derived() {
		cout << "Derived constructor\n";
	}
	~Derived() {
		cout << "Derived destructor\n";
	}
};
int main() {
	Derived dobj;
	return 0;
}*/