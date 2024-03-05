/*#include<stdio.h>
struct inner {
	float x;
};
struct outer {
	struct inner iobj;
	int i, j;
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
	int i;
	struct inner {
		int j;
		struct demo {
			int k;
		}dobj;
	}iobj;
}oobj;

int main() {
	printf("%d\n", &oobj.i);
	printf("%d\n", &oobj.iobj.j);
	printf("%d\n", &oobj.iobj.dobj.k);

	return 0;
}*/