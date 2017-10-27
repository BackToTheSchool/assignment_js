#include <stdio.h>
#include <stdlib.h>

int main() {
	int count, result, input;
	result = 0; input = 0;
	for (count = 0; count < 5; count++) {
		printf("Enter the number : ");
		scanf_s("%d",&input);
		result = result + input;
	}
	printf("Result is %d",result);
	system("pause");
}