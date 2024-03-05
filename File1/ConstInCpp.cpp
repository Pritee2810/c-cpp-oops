#include<iostream>
using namespace std;
//const int i;	//error
/*const int j = 11;
class Demo {
public:
};
int main() {
	return 0;
}*/


/*class Demo {
public:
	const int i;
	Demo() :i(11) {			//Member initialization list - only way to initialize const variable of class

	}
};*/


/*class Demo {
public:
	const int i;
	Demo() {
		i = 11;		//error
	}
};*/


/*class Demo {
public:
	const int i = 11;
};
int main() {
	Demo obj;
	cout<<obj.i;
	return 0;
}*/



//MEMBER INITIALIZATION LIST
/*class Demo {
public:
	const int i;
	Demo():i(11){			//used to initialize const variable of class
	}
};*/


/*class Demo {
public:
	const int i;
	int j, k;
	Demo() :i(11), j(21), k(31) {		//can initialize const and non const variable

	}
	Demo(int x) :i(x), j(x), k(x) {

	}
};
int main() {
	Demo obj1;
	Demo obj2(51);
	cout << obj1.i << obj1.j << obj1.k << endl;
	cout << obj2.i << obj2.j << obj2.k << endl;
	return 0;
}*/


/*class Demo {
public:
	int i, j, k;
	Demo(int a, int b) :i(a), j(b) {
		k = 31;
		i = 101;
	}
};
int main() {
	Demo obj1(10, 20);
	cout << obj1.i << obj1.j << obj1.k << endl;
	return 0;
}*/



/*class Demo {
public:
	int i, j, k;
	Demo(int x) :j(++x), i(x), k(++x) {			//initialization list gets invoked the order in which variables are declared in class
	}
};
int main() {
	Demo obj1(10);
	cout << obj1.i << obj1.j << obj1.k << endl;
	return 0;
}*/


/*class Base {
public:
	int i, j;
	Base(int x, int y) {
		i = x;
		j = y;
	}
};
class Derived :public Base {
public:
	int k;
	Derived() :Base(11, 12) {
		k = 35;
	}
};
int main() {
	Derived dobj;
	cout << dobj.i << dobj.j << dobj.k << endl;
	return 0;
}*/





//CONST FUNCTION OF A CLASS
/*class Demo {
public:
	int i, j;
	Demo() {
		i = 11;
		j = 21;
	}
	void fun(int x) {
		int y = 51;
		x++;
		y++;
		i++;
		j++;
	}
	void gun(int x) const {  //can modify value of local variables only inside const fun. cannot modify local variables
		int y = 51;
		x++;
		y++;
		//i++;	//error
		//j++;	//error
	}
};*/



//CONST OBJECT OF CLASS
/*class Demo {
public:
	int i, j;
	Demo() {
		i = 11;
		j = 21;
	}
	void fun(int x) {
		int y = 51;
		x++;
		y++;
		i++;
		j++;
		cout << "x:" << x<<endl;
		cout << "y:" << x << endl;
	}
	void gun(int x) const {
		int y = 51;
		x++;
		y++;
		//i++;
		//j++;
		cout << "x:" << x << endl;
		cout << "y:" << x << endl;
	}
};
int main() {
	Demo obj1;
	obj1.fun(15);
	obj1.gun(25);
	cout << obj1.i<<endl;
	cout << obj1.j<<endl;

	const Demo obj2;
	//obj2.fun(77);	//error
	obj2.gun(88);
	cout << obj2.i<<endl;
	cout << obj2.j<<endl;
	return 0;
}*/




															//SUMMARY OF CONST
/*class Demo {
public:
	const int i;
	int j;
	Demo() :i(11) {
		j = 21;
	}
	void fun(int x) {
		x++;
		//i++;		//error
		j++;
	}
	void gun(const int x, int y) {
		//x++;		//error
		y++;
		//i++;		//error
		j++;
	}
	void sun(const int x, Demo* p) const {
		//x++;
		//i++;
		//j++;
		//(p->i)++;
		(p->j)++;			//allowed , others error
		//(this->i)++;
		//(this->j)++;
	}
	void run(const Demo* p) const {
		i++;
		j++;
		(p->i)++;
		(p->j)++;
		(this->i)++;
		(this->j)++;
	}
};
int main() {
	Demo obj1;
	const Demo obj2;
	//obj1.i++;
	obj1.j++;
	//obj2.i++;
	//obj2.j++;

	obj1.fun(15);
	obj1.gun(25, 44);
	obj1.sun(89, &obj1);
	obj1.run(&obj1);

	//obj2.fun(77);
	//obj2.gun(88, 23);
	obj2.sun(56, &obj1);
	//obj2.sun(69, &obj2);
	obj2.run(&obj1);
	obj2.run(&obj2);
	return 0;
}*/