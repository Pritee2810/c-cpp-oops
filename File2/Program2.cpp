/*#include<stdio.h>
//3rd bit is on/off
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL checkBit(unsigned int);
BOOL checkBit(unsigned int no) {
	unsigned int mask = 4;
	if ((no & mask) == 0) {
		return FALSE;
	}
	else
		return TRUE;
}
int main() {
	int n = 0;
	printf("enter any no");
	scanf_s("%d", &n);
	if (checkBit(n) == TRUE)
		printf("third bit is on");
	else
		printf("third bit is off");
	return 0;
}*/