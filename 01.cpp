#include <stdio.h>
#include <stdlib.h>

/* run this pro입gram using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	
	printf("정수 하나를 입력하시오. :");
	scanf("%i", &i);
	
	 if (i > 0)
	 	printf("양수입니다.\n");
	else if (i < 0)
		printf("음수입니다.\n");
	else
		printf("0입니다.\n");
		 
	return 0;
}
