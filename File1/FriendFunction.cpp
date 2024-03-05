#include<iostream>
using namespace std;
//FRIEND FUNCTION: WHEN NECKED FUNCTION BECOMES FRIEND OF OUR CLASS
/*class Demo {
public:
	int i;
	Demo() {
		i = 10;
		j = 20;
		k = 30;
	}
private:
	int j;
protected:
	int k;
	friend void fun();
};
void fun() {
	Demo obj;
	cout << obj.i << obj.j << obj.k << endl;
}
int main() {
	fun();
	return 0;
}*/




//MEMBER FUNCTION BECOMES FRIEND OF OUR CLASS
/*class Test {
public:
	void fun();
	void gun();
};
class Demo {
public:
	int i;
	Demo() {
		i = 10;
		j = 20;
		k = 30;
	}
private:
	int j;
protected:
	int k;
	friend void Test::fun();
};
void Test::fun() {
	Demo obj;
	cout << obj.i << obj.j << obj.k << endl;
}
int main() {
	Test tobj;
	tobj.fun();
	return 0;
}*/




//IN INHERITANCE, WE CANNOT ACCESS PRIVATE MEMBER OF CLASS
/*class Base {
private:
	int x;
	
};
class Derived : public Base {
public:
	int y;
};
int main() {
	Derived dobj;
	//dobj.x;		//not accessible
	return 0;
}*/



//WHOLE CLASS BECOMES FRIEND OF OUR CLASS
/*class Demo {
public:
	int i;
	Demo() {
		i = 10;
		j = 20;
		k = 30;
	}
private:
	int j;
protected:
	int k;

	friend class Test;
};
class Test {
public:
	void fun();
};
void Test::fun() {
	Demo obj;
	cout << obj.i << obj.j << obj.k << endl;
}
int main() {
	Test tobj;
	tobj.fun();
	return 0;
}*/





//WE CAN USE FRIEND KEYWORD TO MAIN FUNCTION
/*class myClass
{
	friend int main(int argc, char* argv[]);
	void Hello()
	{
		cout << "Hello Ramn";
	}
};
int main(int argc, char* argv[])
{
	myClass m;
	m.Hello();
	return 0;
}*/



//ACCESSING PRIVARE & PROTECTED MEMBERS OF CLASS USING POINTER IS BAD PROGRAMMING PRACTICE
/*class Demo {
public:
	int i;
private:
	int j;
protected:
	int k;
public:
	Demo() {
		i = 10;
		j = 20;
		k = 30;
	}
};
int main() {
	Demo obj;
	int* p = NULL;
	p = (int*)&obj;

	cout << *(p + 0);
	cout << *(p + 1);
	cout << *(p + 2);
	return 0;
}*/