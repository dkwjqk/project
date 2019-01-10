#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

int main()
{
	char s1[5][13];
	int i = 0, j = 0;
	printf("13자 이내의 문자열을 입력하시오: ");
	for (i = 0; i < 5; i++) {
		
		scanf("%s", s1[i]);
	}
	printf("\n이차원 배열 문자열 출력\n");
	
	for (j = 0; j< 5; j++)
	{
		printf("%s\n ", s1[j]);
		}
	return 0;
}
