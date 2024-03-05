/*#include<stdio.h>
#pragma pack()
struct demo {
	int i;
	char ch1;
	char ch2;
	float f;
};
#pragma pack(3)
struct test {
	char ch[5];
	int i;
};
int main() {
	printf("%d\n", sizeof(demo));
	printf("%d\n", sizeof(test));
	return 0;
}*/




/*#include<stdio.h>
#pragma pack(1)
struct demo {
	int i;
	char ch1;
	float f;
	char ch2;
};
struct demo obj;
int main() {
	printf("%d\n", sizeof(demo));
	//printf("%d\n", sizeof(test));
	return 0;
}*/



/*#include<stdio.h>
struct calender {
	int date : 5;
	int month : 4;			//bit field
	int year : 11;
};
int main() {
	printf("%d\n", sizeof(calender));
	return 0;
}*/