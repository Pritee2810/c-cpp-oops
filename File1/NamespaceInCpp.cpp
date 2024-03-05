#include<iostream>
using namespace std;
/*namespace Demo {
	class Base {
	public:
		void fun() {
			cout << "fun of base\n";
		}
	};
}
int main() {
	using namespace Demo;
	Base bobj;
	bobj.fun();

	Demo::Base bobj2;
	bobj2.fun();
	return 0;
}*/



//nested namespace
/*namespace outer {
	class Demo{};
	namespace inner {
		class Test{};
	}
}
int main() {
	using namespace outer;
	using namespace outer::inner;
	Demo dobj1;
	Test tobj1;
								//OR
	outer::Demo dobj2;
	outer::inner::Test tobj2;
	return 0;
}*/




//unnamed namespace
/*namespace {
	class Demo {};
}
int main() {
	Demo obj;
	return 0;
}*/