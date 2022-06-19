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
	// time_t t = time(NULL);
	// srand((unsigned) time(&t));

	// int test[LEN] = {0};

	// printf("Test array: \n");
	// printf("[");
	// for(int i = 0; i < LEN; i++)
	// {
	// 	test[i] = rand() % 100;
	// 	printf("%d,",test[i]);
	// }
	// printf("]\n");

	int test1[8] = {1,3,6,93,1,1,-2,50};
	int *begRes = highLow(test1,8);
	printf("Beginner Result: \n");
	printArray(begRes,2);

	int test2[8] = {1,2,7,8,9,-1,0,2};
	int *intRes = longestSeq(test2,8);
	printf("Intermediate Result: \n");
	printArray(intRes,8);

	int test3[8] = {4,2,9,7,63,2,9,18};
	int *advRes = prodArray(test3,8);
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