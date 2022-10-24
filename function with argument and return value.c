/*
 ============================================================================
 Name        : function.c
 Author      : Nandakiran.R
 Version     : 1.0
 Copyright   : Free to use, modify and sell..
 Description : Functions in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum(int, int);
int main(void) {
	int a,b, res;
	printf("Enter 2 numbers ");
	scanf("%d%d", &a, &b);
	res=sum(a,b);
	printf("Result is %d", res);
	return EXIT_SUCCESS;
}

int sum(int num1, int num2){
	int result;
	result=num1+num2;
	return result;
}
