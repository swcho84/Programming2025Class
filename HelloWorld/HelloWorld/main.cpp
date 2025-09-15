#pragma warning(disable:4996)

#include <stdio.h>
#define _CRT_SECUER_NO_WARNINGS 

int main()
{
	// practice#1: print "Hello, World!" to the console
	// printf("Hello, World!\n");

	// practice#2: input an integer from the console, and then print it to the console
	int nA = 0;
	printf("input an integer: ");
	scanf("%d", &nA);
	printf("input_result: %d\n", nA);

	return 0;
}