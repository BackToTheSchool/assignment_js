#include <stdio.h>
#include <windows.h>

int main() {
	float euro, dollar;
	float ero, dol;
	euro = 0; dollar = 0; ero = 0.0; dol = 0.0;
	printf("How much Euro do you want to exchange? ");
	scanf_s("%f",&euro);
	printf("What is the exchange rate? ");
	scanf_s("%f",&ero);
	dol = 1127.39;
	dollar = euro * ero / dol;
	printf("%.2f Euros at an exchange rate of %.2f is %.2f dollars. ",euro,ero,dollar);
	system("pause");

}