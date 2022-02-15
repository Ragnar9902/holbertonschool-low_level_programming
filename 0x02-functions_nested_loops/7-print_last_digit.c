#include <stdio.>
#include "main.h"

int print_last_digit(int n){
	int ld = n%10;
	printf("%d", ld);
	return(ld);
}
