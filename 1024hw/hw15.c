#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int login(char *name, int password);
int main() {
	char name[20], password[20],*p; int coword,c;
	printf("Enter your name : ");
	fgets(name,sizeof(name),stdin);
	printf("Enter your password : ");
	fgets(password, sizeof(password), stdin);
	name[strlen(name) - 1] = '\0';
	coword = atoi(password);
	p = name;
	c = 1;
	while (c==1) {
		c = login(p,coword);
		printf("Enter your name : ");
		fgets(name, sizeof(name), stdin);
		printf("Enter your password : ");
		fgets(password, sizeof(password), stdin);
		name[strlen(name) - 1] = '\0';
		coword = atoi(password);
		p = name;
		
	}
	system("pause");
}
int login(char *name, int password) {
	 int word;
	word = 20162689;
	char coname[20] = "Song Myeong ho";
	if (!strcmp(name, coname) && password == word)
	{
		printf("Welcome Professor!\n");
		return 2;
	}
	else if (!strcmp(name, coname))
	{
		printf("Check your password Professor!\n");
		return 1;
	}
	else if (password == word)
	{
		printf("Don't you know your name?\n");
		return 1;
	}
	else {
		printf("Who are you?\n");
		return 1;
	}

}