#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

int main()
{
	char s1[5][13];
	int i = 0, j = 0;
	printf("13�� �̳��� ���ڿ��� �Է��Ͻÿ�: ");
	for (i = 0; i < 5; i++) {
		
		scanf("%s", s1[i]);
	}
	printf("\n������ �迭 ���ڿ� ���\n");
	
	for (j = 0; j< 5; j++)
	{
		printf("%s\n ", s1[j]);
		}
	return 0;
}
