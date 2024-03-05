#include<iostream>
using namespace std;
//call by value
/*void fun(int);
int main() {
	int no = 10;
	cout << no <<endl;
	fun(no);
	cout << no << endl;
	return 0;
}
void fun(int no) {
	no++;
}*/



//call by address
/*void fun(int*);
int main() {
	int no = 10;
	cout << no << endl;
	fun(&no);
	cout << no << endl;
	return 0;
}
void fun(int* p) {
	(*p)++;
}*/



// call by reference
/*void fun(int&);
int main() {
	int no = 10;
	cout << no<<endl;
	fun(no);
	cout << no << endl;
	return 0;
}
void fun(int &ref) {
	ref++;
}*/




//copy constructor
/*class Demo {
public:
	int i, j;
	Demo();
	Demo(int, int);
	Demo(Demo&);	//copy constructor
};
Demo::Demo() {
	i = 10;
	j = 20;
	cout << i << "\t" << j << endl;
}
Demo::Demo(int p, int q) {
	i = p;
	j = q;
	cout << i << "\t" << j << endl;
}
Demo::Demo(Demo& robj) {
	i = robj.i;
	j = robj.j;
	cout << i << "\t" << j << endl;
}
int main() {
	Demo obj1;
	Demo obj2(15, 25);
	Demo obj3(obj1);
	Demo obj4(obj2);
	return 0;
}*/
