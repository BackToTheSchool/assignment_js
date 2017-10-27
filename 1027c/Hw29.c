#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
float CheckRate(float rate);

int main() {
	float rate; int year;
	printf("What is the rate of the year ? ");
	scanf_s("%f",&rate);
	rate = CheckRate(rate);
	year = 72 / rate;
	printf("It will take %d years",year);
	system("pause");
}
float CheckRate(float rate) {
	if (rate <= 0.0) {
		while (getchar() != '\n');//버퍼 비워주기 
		printf("Check the rate. Enter again : ");
		scanf_s("%f",&rate);
		CheckRate(rate);
	}
	else if (isalpha(rate)) {
		while (getchar() != '\n');
		printf("Check the rate. Enter again : ");
		scanf_s("%f", &rate);
		CheckRate(rate);
	}

	return rate;
}