#include<iostream>
using namespace std;
/*void fun() {
	static int i = 11;			//static variable of a program
	int j = 11;
	cout << i << "\t" << j << endl;
	i++;
	j++;
}
int main() {
	fun();
	fun();
	fun();
	fun();
	return 0;
}*/


/*class Demo {
public:
	int i, j, k;
};
int main() {
	cout << sizeof(Demo) << endl;
	return 0;
}*/



/*class Demo {
public:
	static int i;			//static variable of class
	int j, k;
	Demo() {
		j = 20;
		k = 30;
	}
};
int Demo::i = 10;

int main() {
	Demo obj1, obj2;
	cout << Demo::i << endl;
	
	//cout << Demo::j << endl;
	//cout << Demo::k << endl;
	cout << obj1.i << endl;
	cout << obj2.i << endl;

	cout << obj1.j << endl;
	cout << obj1.k << endl;
	cout << obj2.j << endl;
	cout << obj2.k << endl;

	obj1.i--;
	cout << Demo::i << endl;
	cout << obj1.i << endl;		//we can call static variable by object
	cout << obj2.i << endl;
	return 0;
}*/



/*class Demo {
public:
	static int i;
	int j;
	Demo() {
		j = 21;
	}
	void fun() {
		cout << i << endl;
		cout << j << endl;
	}
	static void gun() {				//static function of a class
		cout << i << endl;
		//cout << j << endl;		//static fun needs object to call non static variable
	}
};
int Demo::i = 11;
int main() {
	Demo obj1, obj2;
	//Demo::fun();		//without object name i.e. with class name , we cannot call nonstatic fun
	Demo::gun();
	obj1.fun();
	obj1.gun();
	obj2.fun();
	obj2.gun();
	return 0;
}*/



/*class Demo {
	//code					//NO DIFFERENCE IN STATIC AND NON STATIC OBJECT, ONLY DIFFERENCE IS OF MEMORY LOCATION
};
Demo obj1;					//data section
static Demo obj2;			//Static object - static section
int main() {
	Demo obj3;				//stack section
	static Demo obj4;		//static section
	
	Demo* p = new Demo();	//heap section
	return 0;
}*/