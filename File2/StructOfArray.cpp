/*#include<stdio.h>
struct demo {
	int i, j;
};
struct hello {
	int k, l;
	struct demo obj1, obj2, obj3;
};
struct hello hobj;
struct test {
	int x, y;
	struct demo obj[3];
}tobj;

int main() {
	printf("%d\n", sizeof(demo));
	printf("%d\n", sizeof(hello));
	printf("%d\n", sizeof(hobj.obj1));
	printf("%d\n", sizeof(hobj.obj1.i));
	printf("%d\n", sizeof(tobj.obj));
	printf("%d\n", sizeof(hobj.k));
	return 0;
}*/







/*#include<stdio.h>
struct outer {
	int i, j;
	struct inner {
		int x, y;
	}iobj[2];
}oobj[2];
int main() {
	printf("%d\n", sizeof(oobj));
	printf("%d\n", sizeof(oobj[0]));
	printf("%d\n", sizeof(oobj[0].i));
	printf("%d\n", sizeof(oobj[0].iobj[0]));
	return 0;
}*/






/*#include<stdio.h>
union demo {			//struct
	int i;
	char ch;
	union demo* dobj;	//self referential union	
};
union demo obj;
int main() {
	obj.i = 11;
	obj.ch = 'B';
	printf("%d\n", obj.i);
	printf("%c\n", obj.ch);
	printf("%d\n", obj.ch);
	printf("%d\n", sizeof(demo));
	return 0;
}*/