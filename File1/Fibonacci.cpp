/*#include<stdio.h>
int main() {
	int no = 0, prev = 0, next = 1, res = 0;
	printf("Enter no of terms you want in series");
	scanf_s("%d", &no);
	printf("%d %d ", prev, next);
	for (int i = 1; i <= no; i++) {
		res = prev + next;
		printf("%d ", res);
		prev = next;
		next=res;
	}
	return 0;
}*/