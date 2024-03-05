/*#include<stdio.h>
void rec4(int);
int main() {
	int n = 0;
	printf("Enter any no");
	scanf_s("%d", &n);
	rec4(n);
	return 0;
}
void rec4(int no) {
	int i = 0;
	static int icnt = 0;
	if (no != 0) {
		printf("%d", no);
		for (i = 0; i < icnt; i++) {
			printf("*");
		}
		printf("\n");
		icnt++;
		rec4(no/10);
	}
}*/


//										OR


/*#include<stdio.h>
void rec4(int);
void printStar(int);
int main() {
	int no = 0;
	printf("Enter any no");
	scanf_s("%d", &no);
	rec4(no);
	return 0;
}
void rec4(int no) {
	int i = 0;
	static int icnt = 0;
	if (no != 0) {
		printf("%d", no);
		printStar(icnt);
		printf("\n");
		icnt++;
		rec4(no / 10);
	}
}
void printStar(int num) {
	if (num != 0) {
		printf("*");
		printStar(num - 1);
	}
}*/
