#include <stdio.h>
#include <windows.h>
#include <math.h>
float method(float principal, float rate, int year, int tiems);

int main() {
	float rate,result,principal;
	int year,interest;
	result = 0.0; principal = 0; rate = 0.0; year = 0; interest = 0;
	printf("What is principal of amount? ");
	scanf_s("%f", &principal);
	printf("What is the rate ? ");
	scanf_s("%f", &rate);
	printf("What is the number of the years? ");
	scanf_s("%d",&year);
	printf("How many time is the interest compounded ? ");
	scanf_s("%d",&interest);

	result = method(principal,rate,year,interest);

	printf("$%.2f invested at %.2f%% for %d years coumpounded %d times per year is %.2f",principal,rate,year,interest,result);
	system("pause");
}
float method(float principal, float rate, int year ,int times) {
	float result, interest;
	result = 0.0; interest = 0.0;
	interest = (1 + ((rate/100) / times));
	//result = (int) principal * interest^year^times;
	result = principal * pow(interest, year*times);
	return result;
}
//c에서는 float형 제곱을 하려면 pow를 쓰세요,