#include <stdio.h>
#include <stdlib.h>

void test()
{
	int num = 7;
	int i;
	char j = '0';

	char *heights = malloc(num * sizeof(char));
	for(i = 0;i < 7;i++)
	{
		*(heights + i) = j;
		printf("%c", heights[i]);
		j++;
	}
/*	printf("%s", *heights);*/
}

int main()
{
	test();
}
