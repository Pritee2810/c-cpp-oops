/*#include<stdio.h>
typedef unsigned int UINT;
UINT changeEndianness(UINT);

int main() {
	UINT input=0;
	printf("enter input ");
	scanf_s("%d", &input);

	printf("%d", changeEndianness(input));				//garbage value
	
	return 0;
}
UINT changeEndianness(UINT input) {
	UINT no1, no2, no3, no4, output;
	UINT mask = 0x000000ff;
	no1 = input & mask;
	no1 = no1 << 24;
	mask = mask << 8;
	
	no2 = input & mask;
	no2 = no2 << 8;
	mask = mask << 8;

	no3 = input & mask;
	no3 = no3 >> 8;
	mask = mask << 8;

	no4 = input & mask;
	no4 = no4 >> 24;
	output = no1 | no2 | no3 | no4;
	return output;
}*/