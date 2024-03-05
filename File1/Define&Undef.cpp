/*#include<stdio.h>
int main(){
	#define MAX 10
		printf("%d\n", MAX);
	//#undef		//error
		printf("%d\n", MAX);
	return 0;
}*/


//Object like macro
/*#include<stdio.h>
#define INTEREST 10
int main() {
	int res = 0;
	res=(55 * INTEREST);
	printf("%d\n", res);
	return 0;
}*/


//Function like macro
/*#include<stdio.h>
#define mul(a,b) a*b
int main() {
	int res = 0;
	res = mul(4,5);
	printf("%d\n", res);
	return 0;
}*/