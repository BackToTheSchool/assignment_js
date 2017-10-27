#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int count;
	char name[20][200] = { '\0' };
	count = 0;
	int result;
	printf("Enter the name : ");
	fgets(name[count],sizeof(name),stdin);
	while (strlen(name[count])-1) {
		count++;
		printf("Enter the name : ");
		fgets(name[count], sizeof(name[count]), stdin);
		
	}
	srand(time(NULL));
	result = rand() % count ;
	printf("The winner is %s",name[result]);
	system("pause");

}