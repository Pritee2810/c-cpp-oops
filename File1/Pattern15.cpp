/*#include<stdio.h>
void pattern15(int, int);
int main() {
	int row = 0, col = 0;
	printf("Enter no of rows and no of cols");
	scanf_s("%d%d", &row, &col);
	pattern15(row, col);
	return 0;
}
void pattern15(int row, int col) {
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++) {
			if ((i == 1) || (j == 1) || (i == row) || (j == col))
				printf("%d",j);
			else
				printf("0");
		}
		printf("\n");
	}
}*/