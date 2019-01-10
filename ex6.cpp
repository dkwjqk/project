#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>

int fibonacci(int);

int main()
{
	int i, n;

	printf("n: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("%d ", fibonacci(i));
	}

	getchar();
}

int fibonacci(int n)
{
	
	if (n == 0 || n == 1)
		return n;

	else
		return fibonacci(n - 1) + fibonacci(n - 2);

	
}