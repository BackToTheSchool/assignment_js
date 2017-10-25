#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	float weigh, height,bmi;
	printf("How much do you weigh? ");
	scanf_s("%f",&weigh);
	printf("How much do you tall? ");
	scanf_s("%f",&height);
	height = height / 100;
	bmi = weigh / pow(height, 2.0);
	if (18.5 <= bmi && bmi <=  25)
	{
		printf("Your bmi is %.1f. You are within the ideal weight range",bmi);
	}
	else if (bmi < 18.5) {
		printf("Your bmi is %.1f.\nYou are too skinny. You should see your doctor.",bmi);
	}
	else if (bmi > 25) {
		printf("Your bmi is %.1f.\nYou are overweight. You should see your doctor.",bmi);
	}
	else {
		printf("Please enther the number.");
	}
	system("pause");
}
