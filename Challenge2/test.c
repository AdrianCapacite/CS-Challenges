#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "beg.c"
#include "int.c"
#include "adv.c"

#define LEN 20

void printArray(int *, int);

int main()
{
	time_t t = time(NULL);
	srand((unsigned) time(&t));

	int test[LEN] = {0};

	printf("Test array: \n");
	printf("[");
	for(int i = 0; i < LEN; i++)
	{
		test[i] = rand() % 100;
		printf("%d,",test[i]);
	}
	printf("]\n");


	int *begRes = highLow(test,LEN);
	printf("Beginner Result: \n");
	printArray(begRes,2);

	int *intRes = longestSeq(test,LEN);
	printf("Intermediate Result: \n");
	printArray(intRes,LEN);

	int *advRes = prodArray(test,LEN);
	printf("Advanced Result: \n");
	printArray(advRes,3);

	printf("success\n");
	return 0;
}

void printArray(int *arr, int len)
{
	printf("[");
	for(int i = 0; i < len; i++)
	{
		printf("%d,",arr[i]);
	}
	printf("]\n");
}