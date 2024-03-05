#include<iostream>
using namespace std;
/*class Demo {
public:
	int i, j;
	Demo() {
		i = 11;
		j = 21;
	}
	void fun(int x) {
		cout << i << " " << j << " " << x << endl;
	}
};
int main() {
	Demo obj;
	obj.fun(51);
	return 0;
}*/



/*class Demo {
public:
	int i;
	Demo() {
		i = 11;
	}
	void fun() {
		cout << i << endl;
		cout << this->i << endl;
		cout << (*this).i << endl;
		this->gun();
		(*this).gun();
	}
	void gun() {
		cout << "gun of Demo\n";
	}
};
int main() {
	Demo obj;
	obj.fun();
		//11
		//11
		//11
		//gun of Demo
		//gun of Demo
	return 0;
}*/



/*class Demo {
public:
	int i;
	Demo() {
		i = 11;
	}
	void fun() {
		this->i = 21;
	}
};
int main() {
	Demo obj;
	cout << obj.i << endl;	//11
	obj.fun();
	cout << obj.i << endl;	//21
	return 0;
}*/


/*class Demo {
public:
	int i, j;
	Demo() {
		i = 11;
		j = 21;
	}
	void fun(int i, int j) {
		cout << i << " " << j << endl;
		cout << this->i << " " << this->j << endl;
	}
};
int main() {
	Demo obj;
	obj.fun(41, 51);
	return 0;
}*/