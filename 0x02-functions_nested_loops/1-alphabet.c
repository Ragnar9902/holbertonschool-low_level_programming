#include <stdio.h>

void print_alphabet(void);

int main (void){
	print_alphabet();
}

void print_alphabet(void)
{	
	int i;
	for(i=97;i<123;i++){
	putchar(i);
	}
	putchar('\n');
}
