#include <stdio.h>
#include "main.h"

void print_alphabet(void)
{
        int i, j;
	for(j=1;j<=10;j++){
        for(i=97;i<123;i++){
        putchar(i);
        }
	
        putchar('\n');
	}
}

