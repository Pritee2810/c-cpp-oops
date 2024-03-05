/*#include<stdio.h>
//use of dot operator
struct  test {
	int i, j;
};


struct demo {
	int i, j;
};
struct demo obj = {10,20};			//member initialization technique


struct Test5 {
	int i;
	char ch;
}Tobj = {11,'t'};
struct Test5 eobj = { 'a','b' };
struct Test5 sobj = { 'a', 1034798573.49503984 };	//NA


struct Demo {
	int i, j;
};
struct Demo Dobj[3] = { {10,20},{30,40},{50,60} };


int main() {
	struct test tobj;
	tobj.i = 10;			//member by member technique
	tobj.j = 20;

	printf("%d\n", tobj.i);
	printf("%d\n", obj.j);
	printf("%c\n", Tobj.ch);
	printf("%d\n", sobj.ch);

	struct Demo Eobj[3];
	Eobj[0].i = 10;
	Eobj[0].j = 20;
	Eobj[1].i = 30;
	Eobj[1].j = 40;
	printf("%d\n", Eobj[1].i);
	return 0;
}*/