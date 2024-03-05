#include<iostream>
using namespace std;
//POLYMORPHISM: RUN TIME
/*class Base {
public:
	int i, j;
	 virtual void fun() {
		cout << "fun of Base\n";
	 }
	 virtual void gun() {					//virtual function
		cout << "gun of Base\n";
	 }
	 void sun() {
		cout << "sun of base\n";
	 }
};
class Derived : public Base {
public:
	int x, y;
	void fun() {
		cout << "fun of derived\n";
	}
	void sun() {
		cout << "sun of derived\n";
	}
	 virtual void run() {
		cout << "run of derived\n";
	}
};
int main() {
	Base* bp = NULL;
	Derived dobj;
	bp = &dobj;

	bp->fun();	//fun of derived
	bp->gun();	//gun of Base
	bp->sun();	//sun of base
	
	Base& bref = dobj;
	bref.fun();		//fun of derived
	bref.gun();		//gun of base
	bref.sun();		//sun of base
	//bp->run();		//error

	
	cout << sizeof(Base) << endl;	//16
	cout << sizeof(Derived) << endl;//24

	dobj.fun();
	dobj.sun();
	dobj.run();
	
	return 0;
}*/





//PURE VIRTUAL FUNCTION
/*class Base {
public:
	int i, j;
	void fun() {				//concrete fun
		cout << "fun of base\n";
	}
	virtual void gun() {		//virtual fun
		cout << "gun of base\n";
	}
	virtual void sun() = 0;		//pure virtual fun(abstract) => due to this fun, by default class also becomes abstract =>cannot
								//create object
};
class Derived : public Base {
public:
	int x, y;
	void gun() {
		cout << "gun of derived\n";
	}
	void sun() {
		cout << "sun of derived\n";
	}
};
int main() {
	//Base bobj;	//error : cannot create object of base class
	Derived dobj;
	Base* bp = NULL;
	bp = &dobj;		//upcasting

	bp->fun();
	bp->gun();
	bp->sun();

	cout << sizeof(Base) << endl;
	cout << sizeof(Derived) << endl;
	return 0;
}*/




/*class Base {
public:
	int i, j;
	virtual void sun() = 0;
};
void Base::sun() {
	cout << "partial definition of sun\n";
}
class Derived : public Base {
public:
	void sun() {
		cout << "sun of derived\n";
		Base::sun();
	}
};
int main() {
	Derived dobj;
	Base* bp = NULL;
	bp = &dobj;
	bp->sun();
	return 0;
}*/




//VIRTUAL DESTRUCTOR
/*class Base {
public:
	Base() {
		cout << "Base constructor\n"; 
	}
	virtual ~Base() {
		cout << "Base destructor\n";
	}
};
class Derived : public Base {
public:
	Derived() {
		cout << "Derived constructor\n";
	}
	~Derived() {
		cout << "Derived destructor\n";
	}
};
int main() {
	Base* bp = new Derived();
	delete(bp);
	return 0;
}*/




//PURE VIRTUAL DESTRUCTOR
/*class Base {
public:
	Base() {
		cout << "Base constructor\n";
	}
	virtual ~Base() = 0;		//pure virtual destructor
};
Base:: ~Base() {
	cout << "Partial definition of Base destructor\n";
}
class Derived : public Base {
public:
	Derived() {
		cout << "Derived constructor\n";
	}
	~Derived() {
		cout << "Derived destructor\n";
	}
};
int main() {
	//Base bobj;			//error
	Derived dobj;
	return 0;
}*/