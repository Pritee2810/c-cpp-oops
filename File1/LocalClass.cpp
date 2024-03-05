#include<iostream>
using namespace std;
/*class Test {
public:
	void fun() {
		cout << "fun of test\n";
		class Demo {
		public:
			Demo() {
				cout << "Demo constructor\n";
			}
			~Demo() {
				cout << "Demo destructor\n";
			}
			void gun() {
				cout << "gun of demo\n";
			}
		}dobj;
		dobj.gun();
	}
	Test() {
		cout << "Test constructor\n";
	}
	~Test() {
		cout << "Test destructor\n";
	}
};
int main() {
	Test tobj;
	tobj.fun();
	cout << "Inside main\n";
	return 0;
}*/



//Derived class can change access specifier of base class if we want
/*class Base {
public:
	int x = 11;
};
class Derived : public Base {
private:
//public:
	Base::x;
};
int main() {
	Derived dobj;
	//cout<<dobj.x;		//inaccessible
	return 0;
}*/




//abnormal case due to exit()
/*class Demo {
public:
	Demo() {
		cout << "Demo constructor\n";
	}
	~Demo() {
		cout << "Demo destructor\n";
	}
};
Demo obj1;
int main() {
	Demo obj2;
	exit(0);
	return 0;
}*/




//Mutable in c++
/*class Demo {
public:
	mutable int i;
	int j;
	Demo() {
		i = j = 11;
	}
};
int main() {
	const Demo obj;
	obj.i++;
	//obj.j++;		//must be modifiable value
	return 0;
}*/