/*#include<stdio.h>
struct demo {
	char ch;
	int i;
	float f;
	double d;
};
union test {
	char ch;
	int i;
	float f;
	double d;
};

struct Demo {	//union
	int x, y;
}obj1;
struct Demo obj2;

struct outer {
	int i;
	struct inner {
		int j;			//structure or union of user defined datatype
	};
};
int main() {
	printf("%d\n", sizeof(demo));	//24
	printf("%d\n", sizeof(test));	//8
	printf("%d\n", sizeof(Demo));	//8

	return 0;
}*/