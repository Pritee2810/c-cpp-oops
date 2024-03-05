/*#include<stdio.h>
//make 5th bit on if it is off
typedef unsigned int UINT;

UINT changeBit(UINT);
int main() {
	UINT n = 0;
	printf("enter any no ");
	scanf_s("%d", &n);
	UINT ret = changeBit(n);
	if (ret == n)
		printf("fifth bit is already on");
	else
		printf("fifth bit is on");
	return 0;
}

UINT changeBit(UINT no) {
	UINT mask = 16, res = 0;
	res = no | mask;
	return res;
}*/