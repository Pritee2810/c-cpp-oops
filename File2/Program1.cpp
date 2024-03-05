/*#include<stdio.h>
//no of 1 in binary form
int count1(int);
int count1(int no) {
	int icnt = 0;
	while (no != 0) {
		if ((no % 2) == 1) {
			icnt++;
		}
		no = no / 2;
	}
	return icnt;
}
int main() {
	int n = 0;
	printf("enter any no");
	scanf_s("%d", &n);
	int c=count1(n);
	printf("no of 1 in binary form %d", c);
	return 0;
}*/