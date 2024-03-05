/*#include<stdio.h>
void rec1(int);
void nonrec1(int);
int main() {
	int no = 0;
	printf("Enter any no");
	scanf_s("%d", &no);
	rec1(no);
	printf("\n");
	nonrec1(no);
	return 0;
}
void rec1(int n) {
	if(n!=0) {
		printf("*");
		rec1(n-1);
	}
}
void nonrec1(int n) {
	while (n != 0) {
		printf("*");
		n--;
	}
}*/