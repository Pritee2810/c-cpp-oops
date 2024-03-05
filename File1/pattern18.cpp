/*#include<stdio.h>
void pattern18(int, int);
int main() {
	int row = 0, col = 0;
	printf("Enter no of rows and no of cols");
	scanf_s("%d%d", &row, &col);
	pattern18(row, col);
	return 0;
}
void pattern18(int row, int col) {
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++) {
			if (i > j)
				printf("*");
			else if (i == j)
				printf("|");
			else
				printf("0");
		}
		printf("\n");
	}
}*/