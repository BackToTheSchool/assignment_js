#include <stdio.h>
#include <stdlib.h>

int main() {
	int age, pulse, result,intensity;
	printf("Enter the age : ");
	scanf_s("%d",&age);
	while (getchar() != '\n');
	printf("Enter the current pulse : ");
	scanf_s("%d",&pulse);
	
	printf("Intensity \t| Rate\n");
	printf("-------------------------\n");
	for (intensity = 55; intensity < 100; intensity = intensity + 5) {
		result = (((220 - age) - pulse) * intensity/100) + pulse;
		printf("%d %% \t\t|%d bpm\n",intensity,result);
	}
	system("pause");
}