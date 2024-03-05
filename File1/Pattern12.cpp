/*#include<stdio.h>
void pattern12(int, int);
int main() {
	int row = 0, col = 0;
	printf("Enter no of rows and no of cols");
	scanf_s("%d%d", &row, &col);
	pattern12(row, col);
	return 0;
}
void pattern12(int row, int col) {
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++) {
			if ((i == 1) || (j == 1) || (i == row) || (j == col)) 
				printf("*");
			else
				printf("0");
		}
		printf("\n");
	}
}*/