#include<iostream>
using namespace std;
//1) Defining a class inside another class
/*class Demo {
public:
	Demo() {
		cout << "Demo constructor\n";
	}
	~Demo() {
		cout << "Demo destructor\n";
	}
	class Test {
	public:
		void fun() {
			cout << "fun of test\n";
		}
		Test() {
			cout << "Test constructor\n";
		}
		~Test() {
			cout << "Test Destructor\n";
		}
	}tobj;
};
int main() {
	Demo dobj;
	dobj.tobj.fun();
	return 0;
}*/




//2) Creating object of one class inside another class
/*class Test {
public:
	void fun() {
		cout << "fun of test\n";
	}
	Test() {
		cout << "Test constructor\n";
	}
	~Test() {
		cout << "Test destructor\n";
	}
};
class Demo {
public:
	Demo() {
		cout << "Demo constructor\n";
	}
	~Demo() {
		cout << "Demo destructor\n";
	}
	Test tobj;
};
int main() {
	Demo dobj;
	dobj.tobj.fun();
	return 0;
}
*/