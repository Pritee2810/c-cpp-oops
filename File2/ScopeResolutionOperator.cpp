#include<iostream>
using namespace std;
//1) used to access global variable
/*int i = 11;
int main() {
	int i = 21;
	{
		int i = 31;
		{
			int i = 41;
			cout << i;
			cout << ::i << endl;
		}
		cout << i;
		cout << ::i << endl;
	}
	cout << i;
	cout << ::i << endl;
	return 0;
}*/



//2)used to access members of class using namespace
/*int i = 51;
class Demo {
public:
	int i;
	Demo() {
		i = 21;
	}
	void display() {
		int i = 11;
		cout << i << endl;
		cout << ::i << endl;
		cout << Demo::i << endl;
		cout << this->i << endl;
	}
};
int main() {
	Demo dobj;
	dobj.display();
	return 0;
}*/



//3)used to access static members of class
/*class Demo {
public:
	static int i;
};
int Demo::i = 10;
int main() {
	cout << Demo::i;
	return 0;
}*/



//4) to access member in case of multiple inheritance
/*class Base1 {
public:
	int i;
	Base1() {
		i = 11;
	}
};
class Base2 {
public:
	int i;
	Base2() {
		i = 21;
	}
};
class Derived : public Base1, public Base2 {
public:
	void show() {
		//cout << i << endl;			//ambiguity error
		cout << Base1::i<<endl;
		cout << Base2::i<<endl;
	}
};
int main() {
	Derived dobj;
	dobj.show();
	return 0;
}*/