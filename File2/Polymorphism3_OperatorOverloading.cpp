#include<iostream>
using namespace std;
//overloading unary operator as a member fun
/*class Demo {
public:
	int i, j;
	Demo(int x = 10, int y = 20) {
		i = x;
		j = y;
	}
	Demo& operator +() {
		cout << "Unary +\n";
		return *this;
	}
	Demo operator -() {
		cout << "unaty -\n";
		return Demo(-i, -j);				//SOLVE this error
	}
	Demo& operator ++() {
		cout << "increment\n";
		i++;
		j++;
		return *this;
	}
	Demo& operator --() {
		cout << "decrement\n";
		i--;
		j--;
		return *this;
	}
};
int main() {
	Demo obj1, obj2;
	obj1 = +obj2;
	cout << obj1.i << obj2.i << endl;

	Demo obj3, obj4;
	obj3 = -obj4;
	cout << obj3.i << obj4.i << endl;

	Demo obj5, obj6;
	obj5 = ++obj6;
	cout << obj5.i << obj6.i << endl;

	Demo obj7, obj8;
	obj7 = --obj8;
	cout << obj7.i << obj8.i << endl;
	return 0;
}*/