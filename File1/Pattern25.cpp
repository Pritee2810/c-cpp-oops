/*#include<stdio.h>
void pattern25(int, int);
int main() {
	int row = 0, col=0;
	printf("Enter no of rows and cols");
	scanf_s("%d%d", &row, &col);
	pattern25(row, col);
	return 0;
}
void pattern25(int row, int col) {
	int k = 1;
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++) {
			if ((i == 1) || (i == row) || (j == 1) || (j == col)) {
				printf("%d\t", k);
				k++;
			}
				
			else
				printf("0\t");
		}
		printf("\n");
	}
}*/