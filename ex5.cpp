#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>

int sum(int n);

int main()
{
	int n;
	printf("정수를 입력하시오 : ");
	scanf("%d",&n);
	printf("1에서부터 입력한 정수 까지의 합은 : %d\n",sum(n));
	
	getchar();
}

int sum(int n)
{
	if (n == 1)
		return 1;
	else
		return n + sum(n - 1);
}