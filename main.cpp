#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include "add_nbo.h"


int main(int argc, char* argv[])
{
	FILE *fp, *fp2;
	fp=fopen(argv[1],"rb");
	fp2=fopen(argv[2],"rb");	
	uint32_t n;
	uint32_t n2;
	fread(&n,sizeof(n),1,fp);
	fread(&n2,sizeof(n2),1,fp2);
	add_nbo(n,n2);	
		
	return 0;
}
