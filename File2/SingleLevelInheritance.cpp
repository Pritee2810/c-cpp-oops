/*#include<iostream>
using namespace std;
class Base {
public:
	int i, j;
	Base() {
		cout << "Base Constructor\n";
	}
	~Base() {
		cout << "Base Destructor\n";
	}
	void fun() {
		cout << "Fun of base\n";
	}
};
class Derived : public Base 
{
public:
	int x, y;
	Derived() {
		cout << "Derived Constructor\n";
	}
	~Derived() {
		cout << "Derived Destructor\n";
	}
};
int main() {
	//Base bobj;
	Derived dobj;
	cout << sizeof(Base) << endl;
	cout << sizeof(Derived) << endl;
	
	//dobj.fun();
	//bobj.fun();
	return 0;
}*/