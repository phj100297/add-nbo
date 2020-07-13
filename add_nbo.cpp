#include "add_nbo.h"
#include <stdio.h>

uint32_t add_nbo(uint32_t p,uint32_t p2)
{
	uint32_t n1= (p & 0xFF000000) >>24;
	uint32_t n2= (p & 0x00FF0000) >>8;
	uint32_t n3= (p & 0x0000FF00) <<8;
	uint32_t n4= (p & 0x000000FF) <<24;

	uint32_t n_1= (p2 & 0xFF000000) >> 24;
	uint32_t n_2= (p2 & 0x00FF0000) >>8;
	uint32_t n_3= (p2 & 0x0000FF00) << 8;
	uint32_t n_4= (p2 & 0x000000FF) <<24;

	uint32_t sumn=n1|n2|n3|n4;
	uint32_t sumn2=n_1|n_2|n_3|n_4;
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n",sumn,sumn,sumn2,sumn2,sumn+sumn2,sumn+sumn2);

	return 0;



}



