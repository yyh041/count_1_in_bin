#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Count(int n, int* pi, int* pa)
{
	if (*pi <= 64)//Ĭ��Ϊ64λ����
	{
		if ((n & (*pa)) == 0)
		{
			(*pi)++;
			*pa = (*pa) * 2;
			return Count(n, pi, pa);
		}
		else
		{
			(*pi)++;
			*pa = (*pa) * 2;
			return Count(n, pi, pa) + 1;
		}
	}
	else
	{
		return 0;
	}

}
