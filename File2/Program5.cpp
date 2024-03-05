/*#include<stdio.h>
//on the bit at given position
typedef unsigned int UINT;

UINT changeBit1(UINT, UINT);
int main() {
	UINT n = 0, pos = 0;
	printf("enter any no ");
	scanf_s("%d", &n);
	_flushall();
	printf("enter pos ");
	scanf_s("%d", &pos);

	UINT ret = changeBit1(n, pos);
	if (ret == n)
		printf("bit is already on");
	else
		printf("bit is on");
	return 0;
}

UINT changeBit1(UINT no, UINT pos) {
	UINT mask = 1;
	mask = mask << (pos - 1);
	no = no | mask;
	return no;
}*/