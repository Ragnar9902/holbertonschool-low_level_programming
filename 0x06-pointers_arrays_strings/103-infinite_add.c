#include "main.h"

/*
 * infinite_add - add two number of any size
 * @n1 : number 1
 * @n2 : number 2
 * @r : buffer with the result
 * @size_r : size of r
 * Return : r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;

	i = 0;
	while(n1[i] != '\n')
	{
		i++;
	}

	while(n2[j] != '\n')
	{
		j++;
	}

	if(i != j)
	{
		if(i > j)
		{
			int h;
			int res;

			for(h = 0;h < j;h++)
			{
				res = (n1[i -1 - h] - '0') + (n2[j - 1 - h] - '0');
				if(res < 10)
				{
					r[99 - h] = '0' + res;
				}
			}
		}else
		{
		}
	}
}
