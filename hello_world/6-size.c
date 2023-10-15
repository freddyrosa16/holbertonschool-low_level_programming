#include <stdio.h>
/**
 * main - Principal function, and prints the function
 * Return: returns value 0
 */
int main(void)
{
	char charType;
	int intergerType;
	long int longintergerType;
	long long int longlongintergertype;
	float floatType;
	// Size of operator is used to evaluate the size of the variable
	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", sizeof(intergerType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longintergerType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longlongintergerType));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatType));
	return(0)
