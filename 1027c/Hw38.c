#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char input[200] = { '\0' }; int num[50] = { 0 }; int count; int seCount;
	printf("Enter the list of numbers : ");
	fgets(input,sizeof(input),stdin);
	char *left;
	char *sort = strtok_s(input, " ",&left);
	count = 0;
	while (sort != NULL) {
		num[count] = atoi(sort);
		sort = strtok_s(NULL, " ",&left);
		count ++;
	}
	printf("The even numbers are ");
	for (seCount = 0; seCount < count; seCount++) {
		if(num[seCount]%2 ==0)
		printf(" %d", num[seCount]);
	}
	system("pause");
}