#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(){
	char name[20];
	puts("What is your name?");
	fgets(name,sizeof(name),stdin);
	name[strlen(name) - 1] =  '\0';
	printf("Good morning. %s", name);
	system("pause");
	return 0;
}