/*#include<stdio.h>
#include<stdlib.h>
int main() {
	int no = 0, i = 0;
	int* p = NULL;
	printf("Enter size of array");
	scanf_s("%d", &no);

	p = (int*)malloc(no * sizeof(int));
	//validation
	if (p == NULL) {
		printf("Memory is not available!!");
		return -1;
	}
	printf("Enter array elements");
	for (i = 0; i < no; i++) {
		scanf_s("%d", &p[i]);
	}
	printf("Array elements are");
	for (i = 0; i < no; i++) {
		printf("%d ", p[i]);
	} 
	free(p);
	return 0;
}*/