#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>

int sum(int n);

int main()
{
	int n;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d",&n);
	printf("1�������� �Է��� ���� ������ ���� : %d\n",sum(n));
	
	getchar();
}

int sum(int n)
{
	if (n == 1)
		return 1;
	else
		return n + sum(n - 1);
}