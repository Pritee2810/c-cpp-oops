/*#include<stdio.h>
void pattern24(int);
int main() {
	int row = 0;
	printf("Enter no of rows");
	scanf_s("%d", &row);
	pattern24(row);
	return 0;
}
void pattern24(int row) {
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % 2 == 0)
				printf("0");
			else
				printf("%d", j);
		}
		printf("\n");
	}
}*/