/*#include<stdio.h>
//3rd & 7th bit is on/off
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL checkBit1(UINT);
int main() {
	UINT n = 0;
	printf("enter any no ");
	scanf_s("%d", &n);
	BOOL ret = checkBit1(n);
	if (ret == TRUE)
		printf("third & seventh bit is on");
	else
		printf("third & seventh bit is off");
	return 0;
}

BOOL checkBit1(UINT no) {
	UINT mask = 68;
	if ((no & mask) == 68) {
		return FALSE;
	}
	else
		return TRUE;
}
*/