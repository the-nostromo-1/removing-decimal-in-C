/*
Write a program that takes a floating point number from the user and displays only the decimal value
i.e. inputing 12.7 displays only .7
04/15/2022
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	float data, dataDecimal;
	int dataInt;
	//
	printf("Please input a number with a decimal point\n");
	scanf_s("%f", &data);
	//
	dataInt = (int)data;
	dataDecimal = data - dataInt;
	//
	printf("The decimal point from the number you entered is %f\n", dataDecimal);
	return 0;
}