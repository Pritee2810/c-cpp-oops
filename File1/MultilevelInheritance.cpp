/*#include<iostream>
using namespace std;
class Base {
public:
	int i;
	Base() {
		cout << "Base constructor\n";
	}
	~Base() {
		cout << "Base destructor\n";
	}
};
class Derived1 : public Base {
public:
	int j;
	Derived1() {
		cout << "Derived1 constructor\n";
	}
	~Derived1() {
		cout << "Derived1 destructor\n";
	}
};
class Derived2 :public Derived1 {
public:
	int k;
	Derived2() {
		cout << "Derived2 constructor\n";
	}
	~Derived2() {
		cout << "Derived2 destructor\n";
	}
};
int main() {
	Derived2 ddobj;
	cout << sizeof(Base) << endl;
	cout << sizeof(Derived1) << endl;
	cout << sizeof(Derived2) << endl;
	return 0;
}*/