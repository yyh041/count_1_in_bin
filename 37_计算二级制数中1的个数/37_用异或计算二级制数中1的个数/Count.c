#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Count(int n, int* pi, int* pa)
{
	if (*pi <= 64)//默认为64位电脑
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
