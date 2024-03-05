/*#include<stdio.h>
int main() {
	FILE* fp = NULL;
	char ch;
	fp = fopen_s("C:\\Users\\ThinkPad\\Desktop\\ShriGanesh.txt");
	if (fp == NULL) {
		printf("Unable to create a file!!\n");
		return -1;
	}
	printf("File created successfully!!\n");
	while(1){
		printf("Enter character");
		scanf_s("%c", &ch);
		_flushall();
		if (ch == 'z') {
			break;
		}
		putc(ch, fp);
	}
	return 0;
}*/