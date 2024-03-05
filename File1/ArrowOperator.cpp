/*#include<stdio.h>
struct demo {
	float i, j;
};
struct demo obj1;

struct test {
	int i, j;
};
struct test obj;
struct test* p;


struct team {
	int i;
};
struct team tobj1, tobj2;

 
struct game {
	int i, j;
};
struct game gobj1 = { 10,20 };
struct game gobj2 = { 10, 20 };


union cricket {
	int i, j, k;
};


int main() {
	obj1.i = 1.2f;
	obj1.j = 3.14f;
	printf("%f\n", obj1.i);

	p = &obj;
	p->i = 30;
	p->j = 40;
	printf("%d\n", p->i);

	tobj1.i = 11;
	tobj2 = tobj1;
	printf("%d\n", tobj2.i);						*/

	//if (gobj1 == gobj2)			//error
	//	printf("equal");
	//else							
	//	printf("not equal");
	


	/*if ((gobj1.i == gobj2.i) && (gobj1.j >= gobj2.j))
		printf("equal\n");
	else
		printf("not equal\n");


	union cricket cobj;
	printf("%d\n", &cobj.i);
	printf("%d\n", &cobj.j);
	printf("%d\n", &cobj.k);
	printf("%d\n", sizeof(cobj));
	return 0;
}*/