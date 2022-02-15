#include <stdio.h>
#include "main.h"

void jack_bauer(void){
	int h=0, m;
	while(h<=23){
		m=0;
		while(m<=59){
			if(h>=10){
				if(m>=10){
				printf("%d:%d",h,m);
				}else{
				printf("%d:0%d",h,m);

				}
			}else{
			if(m>=10){
                                printf("0%d:%d",h,m);
                                }else{
                                printf("0%d:0%d",h,m);


			}}
			m++;

		}
		
		h++;	
	}

}
