/*#include<stdio.h>
int main() {
	int no = 0, i = 0, rem = 0, sum = 0;
	printf("Enter any no");
	scanf_s("%d", &no);
	while (no > 9) {
		while (no != 0) {
			rem = no % 10;
			sum = sum + rem;
			no = no / 10;
		}
		printf("%d\t", sum);
		no = sum;
		sum = 0;
	}
	
	return 0;
}*/