#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int count,remember;
	char input[20];
	char name[5][200] = { "John Smith","Jackie Jackson","Chris Jones","Amanda Cullen","Jeremy Goodwin" };
	printf("There are 5 employees\n");
	for (count = 0; count < 5; count++) {
		printf("%s\n",name[count]);
	}
	printf("Enter the name to remove : ");
	fgets(input,sizeof(input),stdin);
	input[strlen(input) - 1] = '\0';
	remember = -1;
	for (count = 0; count < 5; count++) {
		if (!strcmp(input, name[count])) {
			remember = count;
			break;
		}
	}
	if (remember != -1) {
		printf("There are 4 employess.\n");
		for (count = 0; count < 5; count++) {
			if (count != remember) {
				printf("%s\n",name[count]);
			}
		}
	}
	else {
		printf("We don't know about %s",input);
	}
	system("pause");
}