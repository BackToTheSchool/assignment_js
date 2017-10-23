/*#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>

int main() {
	struct tm t;
	time_t timer;
	timer = time(NULL);
	 localtime_s(&t, &timer);
	int age, retire, year, reyear;
	age = 0; retire = 0; year = 0; reyear = 0;
	year = t.tm_year + 1900;
	printf("What is your current age? ");
	scanf_s("%d", &age);
	printf("What age should you retire? ");
	scanf_s("%d", &retire);
	reyear = year + retire - age;
	if (age < retire) {
		printf("You have %d age left until you should retire.\n It's %d, so you can retire at %d.", retire - age,year, reyear);
	}
	else
		printf("You already retired. Enjoy your retire life. I guess it will be better than youth");
	system("pause");
}*/