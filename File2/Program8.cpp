/*#include<stdio.h>                                  //ERROR prog 
//accept ip address from user & store that ip address into single integer value
typedef unsigned int UINT;

UINT formIP(UINT, UINT, UINT, UINT);
UINT printIP(UINT);

int main() {
	UINT n1=0, n2=0, n3=0, n4=0;
	printf("enter ip address in 4 parts n1, n2, n3, n4 ");
	scanf_s("%d%d%d%d", &n1, &n2, &n3, &n4);

	UINT ret = formIP(n1, n2, n3, n4);
	printIP(ret);
	return 0;
}

UINT formIP(UINT no1, UINT no2, UINT no3, UINT no4) {
	UINT IP = 0;
	no1 = no1 << 24;
	no2 = no2 << 16;
	no3 = no3 << 8;
	no4 = no4 << 0;
	IP = (no1 | no2 | no3 | no4);
	return IP;
}

void UINT printIP(UINT ip) {
	UINT no1, no2, no3, no4;
	UINT mask = 0x000000ff;
	no1 = ip & mask;
	ip = ip >> 8;
	no2 = ip & mask;
	ip = ip >> 8;
	no3 = ip & mask;
	ip = ip >> 8;
	no4 = ip & mask;
	printf("%d%d%d%d", no4, no3, no2, no1);
}*/