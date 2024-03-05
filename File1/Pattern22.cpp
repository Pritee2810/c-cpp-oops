/*#include<stdio.h>
void pattern22(int);
int main() {
	int row = 0;
	printf("Enter no of rows");
	scanf_s("%d", &row);
	pattern22(row);
	return 0;
}
void pattern22(int row) {
	for (int i = 1; i <=row; i++) {
		for (int j = 1; j <= i; j++) {
			if (j % 2 == 0)
				printf("0");
			else
				printf("%d", j);
		}
		printf("\n");
	}
}*/