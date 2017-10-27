#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Math.h>
int InputNum();
int main() {
	int numberAr[200] = { 0 }; float standard;
	int count, seCount, average, minimum, maximum;
	count = 0;
	average = 0;
	numberAr[count] = InputNum();
	while (numberAr[count] != -1) {
		count++;
		numberAr[count] = InputNum();
	}
	
	printf("The number is : ");
	minimum = numberAr[0];
	maximum = numberAr[0];
	for (seCount = 0; seCount < count; seCount++) {
		printf("%d ",numberAr[seCount]);
		average = average + numberAr[seCount];
		if (minimum > numberAr[seCount]) {
			minimum = numberAr[seCount];
		}
		if (maximum < numberAr[seCount]) {
			maximum = numberAr[seCount];
		}
		
	}
	average = average / count;
	printf("\nThe average is %d\nThe minimum is %d\nThe maximum is %d\n",average,minimum,maximum);
	maximum = 0;
	for (seCount = 0; seCount< count; seCount++) {
		minimum = pow((numberAr[seCount] - average),2);
		maximum = maximum + minimum;
	}
	maximum = maximum / count;
	standard = sqrt(maximum);
	printf("The standard deviation is %.2f",standard);
	
	system("pause");
}
int InputNum() {
	char line[20] = {'\0'};
	int input;
	printf("Enter the number : ");
	fgets(line,sizeof(line),stdin);
	line[strlen(line) - 1] = '\0';
	if (strcmp(line, "done")) {
		input = atoi(line);
		if (input < 0) {
			printf("Enter the number bigger than 0\n");
			InputNum();
		}
	}
	else {
		input = -1;
	}
	return input;
}