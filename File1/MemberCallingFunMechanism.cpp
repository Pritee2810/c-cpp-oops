/*#include<iostream>
using namespace std;
//member calling function mechanism
class Demo {
public:
	int i, j;
	Demo() {
		i = 11;
		j = 21;
	}
	void fun() {
		cout << i << " " << j << endl;
	}
};
int main() {
	Demo obj1, obj2;
	obj2.i = 41;
	obj2.j = 51;
	obj1.fun();	//11 21
	obj2.fun(); //41 51

	Demo obj3;
	Demo* p = NULL;		//pointer to object
	p = &obj3;

	p->i = 31;
	obj3.fun();  //31 21
	p->fun();	 //31 21
	(&obj3)->fun();  //31 21
	(*p).fun();   //31 21
	return 0;
}*/