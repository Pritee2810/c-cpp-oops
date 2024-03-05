/*#include<stdio.h>
void pattern11(int, int);
int main() {
	int row = 0, col = 0;
	printf("Enter no of rows and no of cols");
	scanf_s("%d%d", &row, &col);
	pattern11(row, col);
	return 0;
}
void pattern11(int row, int col) {
	int k = 1;
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++) {
			printf("%d\t", k);
			k++;
			if (k == 10)
				k = 1;
		}
		printf("\n");
	}
}*/