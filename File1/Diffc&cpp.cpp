//approach1: procedure oriented
/*#include<stdio.h>
int add(int no1, int no2) {
	int ans = no1 + no2;
	return ans;
}
int sub(int no1, int no2) {
	int ans = no1 - no2;
	return ans;
}
int main() {
	int a = 0, b = 0, c = 0;
	printf("Enter 2 nos");
	scanf_s("%d%d", &a, &b);
	c = add(a, b);
	printf("addition is %d\n", c);
	c = sub(a, b);
	printf("substraction is %d\n", c);
	return 0;
}*/


//approach2: object oriented 
/*#include<iostream>
using namespace std;
class Maths {
public:
	int no1, no2, ans;
	void add();
	void sub();
};
//returntype classname :: function(args)
void Maths::add() {
	ans = no1 + no2;
}
void Maths::sub() {
	ans = no1 - no2;
}
int main() {
	Maths obj;
	cout << sizeof(obj) << endl;
	obj.no1 = 10;
	obj.no2 = 20;
	obj.add();
	cout << obj.ans<<endl;
	obj.sub();
	cout << obj.ans<<endl;
	return 0;
}*/




//constructor
/*#include<iostream>
using namespace std;
class Demo {
public:
	int i, j;
	Demo();
	Demo(int);
	Demo(int, int);
};
Demo::Demo() {
	i = 10;
	j = 20;
	cout << i << "\t" << j << endl;
}
Demo::Demo(int x) {
	i = j = x;
	cout << i << "\t" << j << endl;
}
Demo::Demo(int p, int q) {
	i = p;
	j = q;
	cout << i << "\t" << j << endl;
}
int main() {
	Demo obj1;
	Demo obj2(15);
	Demo obj3(11, 21);
	return 0;
}*/


//if programmer provider parameterized constructor , compiler will not add default constructor, and if we create object as
// Demo obj;
//compiler will not able to find default constructor , will generate error for not able to find default constuctor
/*#include<iostream>
using namespace std;
class Demo {
public:
	int i, j;
	Demo(int);
	Demo(int, int);
};
Demo::Demo(int x) {
	i = j = x;
	cout << i << "\t" << j << endl;
}
Demo::Demo(int p, int q) {
	i = p;
	j = q;
	cout << i << "\t" << j << endl;
}
int main() {
	//Demo obj1;	//error
	Demo obj2(15);
	return 0;
}*/




//solution: default arguments
/*#include<iostream>
using namespace std;
class Demo {
public:
	int i, j;
	Demo(int);
	Demo(int, int);
};

Demo::Demo(int p, int q) {
	i = p;
	j = q;
	cout << i << "\t" << j << endl;
}
Demo::Demo(int x=10) {
	i = j = x;
	cout << i << "\t" << j << endl;
}

int main() {
	Demo obj1;
	Demo obj2(15);
	Demo obj3(11, 21);
	Demo obj4;
	return 0;
}*/



/*#include<iostream>
using namespace std;
class Demo {
public:
	int i, j;
	Demo(int, int);
};
Demo::Demo(int p = 10, int q = 20) {
	i = p;
	j = q;
	cout << i << "\t" << j << endl;
}
int main() {
	Demo obj1;
	Demo obj2(15);
	Demo obj3(11, 21);
	return 0;
}*/