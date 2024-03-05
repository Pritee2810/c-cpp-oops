#include<iostream>
using namespace std;
//POLYMORPHISM: COMPILE TIME : 1) NO OF PARAMETERS
/*/class Demo {
public:
	void fun(int a) {
		cout << "function 1\n";
	}
	void fun(int a, int b) {
		cout << "function 2\n";
	}
};
int main() {
	Demo obj;
	obj.fun(11);
	obj.fun(21, 51);
	return 0;
}*/


//2) TYPE OF PARAMETERS
/*class Demo {
public:
	void fun(int a, int b) {
		cout << "function 1\n";
	}
	void fun(float f, float g) {
		cout << "function 2\n";
	}
};
int main() {
	Demo obj;
	obj.fun(21, 51);
	obj.fun(1.1f, 3.14f);
	return 0;
}*/



//3) SEQUENCE OF PARAMETERS
/*class Demo {
public:
	void fun(int a, float b) {
		cout << "function 1\n";
	}
	void fun(float f, int g) {
		cout << "function 2\n";
	}
};
int main() {
	Demo obj;
	obj.fun(21, 5.1f);
	obj.fun(1.1f, 13);
	return 0;
}*/



//IMPLICIT TYPECASTING
/*class Demo {
public:
    void fun(int a) {
		cout << "integer function\n";
	}
	void fun(double d) {
		cout << "double function\n";
	}
};
int main() {
	Demo obj;
	obj.fun(11);
	obj.fun(2.2);
	obj.fun('A');
	obj.fun(2.5f);
	return 0;
}*/



//EXPLICIT TYPECASTING
/*class Demo {
public:
	void fun(int a) {
		cout << "Integer\n";
	}
	void fun(char ch) {
		cout << "character\n";
	}
};
int main() {
	Demo obj;
	obj.fun(11);
	obj.fun((int)2.2);
	obj.fun('A');
	obj.fun((char)2.5f);
	return 0;
}*/


//CAN USE CONCEPT OF CONST TO OVERLOADED FUNCTION
/*class Demo {
public:
	void fun(int a) {
		cout << "function 1\n";
	}
	void fun(int i) const {
		cout << "function 2\n";
	}
};
int main() {
	Demo obj1;
	obj1.fun(10);
	const Demo obj2;
	obj2.fun(20);
	return 0;
}*/



//	CANNOT OVERLOAD FUNCTION BY CHANGING FUNCTION ARGUMENTS AS A CONSTANT
/*class Demo {
public:
	void fun(int a) {
		cout << "function 1\n";
	}
	//void fun(const int i) {
	//	cout << "function 2\n";
	//}
};//error
*/



//CAN OVERLOAD FUN BY USING CONCEPT OF DATATYPE MODIFIER
/*class Demo {
public:
	void fun(signed int a) {
		cout << "signed function\n";
	}
	void fun(unsigned int i) {
		cout << "unsigned function\n";
	}
};
int main() {
	Demo obj;
	obj.fun(11);
	obj.fun(-11);
	obj.fun(+11);

	obj.fun(unsigned(21));
	unsigned int x = 25;
	obj.fun(x);
	return 0;
}*/

/*class Demo {
public:
	void fun(long int a) {
		cout << "long function\n";
	}
	void fun(short int b) {
		cout << "short function\n";
	}
	void fun(int c) {
		cout << "int function\n";
	}
};
int main() {
	Demo obj;
	obj.fun((short)11);
	obj.fun(21);
	obj.fun((long)31);
	return 0;
}*/




//CAN OVERLOAD STATIC FUNCTION
/*class Demo {
public:
	static void fun(int a) {
		cout << "function 1\n";
	}
	static void fun(int b, int c) {
		cout << "function 2\n";			//can overload static & static by parameters should be according to 3 types of the same
	}
};
int main() {
	Demo::fun(10, 20);
	Demo::fun(8);
	return 0;
}*/

/*class Demo {
public:
	static void fun(int a) {
		cout << "function 1\n";
	}
	void fun(int b, int c) {
		cout << "function 2\n";		//can overload static & non static by parameters should be according to 3 types of the same
	}
};
int main() {
	Demo obj;
	obj.fun(10, 20);
	Demo::fun(8);
	return 0;
}*/



//CAN'T OVERLOAD STATIC & NON STATIC IF PARAMETERS ARE SAME
/*class Demo {
public:
	void fun(int a) {
		cout << "function 1\n";
	}
	static void fun(int b) {
		cout << "function 2\n";
	}
};//error
*/



//CAN'T OVERLOAD FUN ON THE BASIS OF RETURN TYPE
/*class Demo {
public:
	int fun(int a) {
	}
	char fun(int b) {	//cannot overload functions distinguished by return type alone ... parameters should be acc. to conditions
	}
};//error
*/


//CAN'T USE INLINE CONCEPT FOR OVERLOADING
/*class Demo {
public:
	void fun(int a){
	}
	inline void fun(int b, int c) {		//fun already defined ...parameters should be changed
	}
};//error
*/


//CAN'T USE ACCESS SPECIFIER FOR OVERLOADING
/*class Demo {
public:
	void fun(int a) {
	}
private:
	void fun(int b) {		//alredy defined
	}
};//error
*/



//CAN USE CONCEPT OF GENERIC POINTER
/*class Demo {
public:
	void fun(int* a) {
		cout << "int pointer\n";
	}
	void fun(void* v) {
		cout << "generic pointer\n";
	}
	void fun(float* b) {
		cout << "float pointer\n";
	}
};
int main() {
	Demo obj;
	int i;
	float f;
	char ch;
	obj.fun(&i);
	obj.fun(&f);
	obj.fun(&ch);
	return 0;
}*/