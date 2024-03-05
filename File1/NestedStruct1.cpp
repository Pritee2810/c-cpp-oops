/*#include<stdio.h>
struct outer {
	int i, j;
	struct inner {
		float x;
	}iobj;									//way1
};
struct outer oobj;

int main() {
	printf("%d\n", &oobj.i);
	printf("%d\n", &oobj.j);
	printf("%d\n", &oobj.iobj.x);
	return 0;
}*/





/*#include<stdio.h>
struct outer {
	struct inner {
		float x;
	}iobj;
	int i, j;
};
struct outer oobj;

int main() {
	printf("%d\n", &oobj.i);
	printf("%d\n", &oobj.j);
	printf("%d\n", &oobj.iobj.x);
	return 0;
}*/






//2 ways of writting nested structure
/*#include<stdio.h>
struct inner {
	float x;
};
struct outer {
	int i, j;
	struct inner iobj;				//way2
};
struct outer oobj;

int main() {
	printf("%d\n", &oobj.i);
	printf("%d\n", &oobj.j);
	printf("%d\n", &oobj.iobj.x);
	return 0;
}*/