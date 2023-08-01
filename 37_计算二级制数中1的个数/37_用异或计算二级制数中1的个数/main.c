#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "my.h"

int main()
{
	int num = 4096;
	int i = 0;
	int a = 1;
	scanf("%d", &num);
	printf("二进制中有%d个“1”", Count(num, &i, &a));

	return 0;
}