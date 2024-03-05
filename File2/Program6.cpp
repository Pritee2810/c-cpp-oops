/*#include<stdio.h>
//off the bit if it is on
typedef unsigned int UINT;

UINT offBit(UINT, UINT);
int main() {
	UINT n = 0, pos = 0;
	printf("enter any no ");
	scanf_s("%d", &n);
	_flushall();
	printf("enter pos ");
	scanf_s("%d", &pos);

	UINT ret = offBit(n, pos);
	if (ret == n)
		printf("bit is already off");
	else
		printf("bit is off");
	return 0;
}

UINT offBit(UINT no, UINT pos) {
	UINT mask1 = 0xffffff, mask2 = 1, mask3 = 0;
	mask2 = mask2 << (pos - 1);
	mask3 = mask1 ^ mask2;
	no = no & mask3;
	return no;
}*/