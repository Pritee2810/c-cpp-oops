/*#include<stdio.h>
void pattern26(int, int);
int main() {
	int row = 0, col = 0;
	printf("Enter no of rows and cols");
	scanf_s("%d%d", &row, &col);
	pattern26(row, col);
	return 0;
}
void pattern26(int row, int col) {
	int k = 1;
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <=col; j++) {
			if(j>=i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}*/