/*#include<stdio.h>
//no of 1's using shift operator
typedef unsigned int UINT;
int bitCount(UINT);
int bitCount(UINT no) {
	int icnt = 0, i = 0;
	UINT mask = 1;
	while (i <= 31) {
		if ((no & mask) != 0) {
			icnt++;
		}
		i++;
		mask = mask << 1;
	}
	return icnt;
}
int main() {
	int n = 0;
	printf("enter any no");
	scanf_s("%d", &n);
	int c = bitCount(n);
	printf("no of 1 in binary form %d", c);
	return 0;
}*/