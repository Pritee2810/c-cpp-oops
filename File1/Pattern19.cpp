/*#include<stdio.h>
void pattern19(int, int);
int main() {
	int row = 0, col = 0;
	printf("Enter no of rows and no of cols");
	scanf_s("%d%d", &row, &col);
	pattern19(row, col);
	return 0;
}
void pattern19(int row, int col) {
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++) {
			if (i %2 ==0)
				printf("*");
			else
				printf("|");
		}
		printf("\n");
	}
}*/