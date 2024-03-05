/*#include<iostream>
using namespace std;

//int* p = new int;
//int* p = new int(21);

class Demo {
public:
	int i, j;
	Demo() {
		i = j = 0;
		cout << "Default constructor\n";
	}
	Demo(int x) {
		cout << "parameterized constructor\n";
	}
	Demo(Demo& ref) {
		cout << "copy constructor\n";
	}
	~Demo() {
		cout << "Destructor\n";
	}
};
int main() {
	//cout << *p << endl;
	//Demo* p = (Demo*)malloc(sizeof(Demo));

	Demo* p = new Demo;						//Default const
	cout << p->i << "\t" << p->j << endl;
	Demo* q = new Demo();
	cout << q->i << "\t" << q->j << endl;

	Demo* r = new Demo(38);
	Demo* s = new Demo(*r);

	Demo obj;								//default const & dest
	Demo* t = new Demo(obj);

	//free(p);
	delete p;
	delete q;
	delete r;
	delete s;
	delete t;
	
	return 0;
}*/