#include <stdio.h>
#include "main.h"

int print_sing(int n){
	if(n>0){
		printf("+");
		return(1);
	}else if(n==0){
		printf("0");
                return(0);
	
	}else{
		printf("-");
                return(-1);
	}
}
