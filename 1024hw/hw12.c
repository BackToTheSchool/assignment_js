#include <stdio.h>
#include <windows.h>

int main() {
	int principal,year; float interest,result;
	principal = 0; interest = 0.0; year = 0;
	printf("Enter the principal : ");
	scanf_s("%d",&principal);
	printf("Enter the rate of interest : ");
	scanf_s("%f",&interest);
	printf("Enter the number of the years : ");
	scanf_s("%d",&year);
	result = principal + (principal * interest * year / 100);
	printf("After %d years at %.2f%%, the invest will be worth $%.2f",year,interest,result);
	system("pause");
}