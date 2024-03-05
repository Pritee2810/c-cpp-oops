/*#include<stdio.h>
int digitCount(int);
int recCnt(int);
int main() {
	int no = 0;
	printf("Enter any no");
	scanf_s("%d", &no);
	int cnt=digitCount(no);
	int digits = recCnt(no);
	printf("No of digits =%d\n", cnt);
	printf("No of digits =%d", digits);
	return 0;
}
int digitCount(int n) {
	int icnt = 0;
	while (n != 0) {
		int rem = n % 10;
		icnt++;
		n = n / 10;
	}
	return icnt;
}

int recCnt(int n) {
	static int icnt = 0;
	if(n != 0) {
		int rem = n % 10;
		icnt++;
		recCnt(n/10);
	}
	return icnt;
}*/