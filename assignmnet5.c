/*#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main() {
	char first[10], second[10];
	int a, b;
	float c, d;
	printf("What is the first number?");
	fgets(first, sizeof(first), stdin);
	printf("What is the second number?");
	fgets(second, sizeof(second), stdin);
	a = 0;	b = 0; c = 0; d = 0;
	first[strlen(first) - 1] = '\0';
	second[strlen(second) - 1] = '\0';
	a = atoi(first);
	b = atoi(second);
	c = a - b;
	d = a / b;
	printf("%d + %d = %d \n %d - %d = %f \n %d * %d = %d \n %d / %d = %f", a, b, a + b, a, b, c, a, b, a*b, a, b, d);
	system("pause");
}*/