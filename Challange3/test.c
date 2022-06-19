#include <stdio.h>
#include "challenge3.c"

#define LEN 4

int main()
{
	char *list[LEN] = {"iiso", "iiio", "dddso","iissoiiio"};

	for(int i = 0; i < LEN; i++)
		parser(list[i]);

	
	return 0;
}
