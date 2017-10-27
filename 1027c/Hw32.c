#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void GuessGame(int level);
int main() {
	int level;
	printf("Enter the level : ");
	scanf_s("%d",&level);
	while (getchar() != '\n');
	GuessGame(level);
}
void GuessGame(int level) {
	char again;
	int answer,input;
	srand(time(NULL));
	if (level == 1)
		answer = rand() % 10 + 1;
	else if (level == 2)
		answer = rand() % 100 + 1;
	else
		answer = rand() % 1000 + 1;
	
	printf("Enter the number : ");
	scanf_s("%d",&input);
	while (getchar() != '\n');
	while (input != answer) {
		if (input < answer) {
			printf("Your number is low.\n");
			printf("Enter the number : ");
			scanf_s("%d", &input);
			while (getchar() != '\n');
		}
		else if (input > answer) {
			printf("Your number is high.\n");
			printf("Enter the number : ");
			scanf_s("%d", &input);
			while (getchar() != '\n');
		}
	}
	printf("Your number is correct.\n");
	printf("Do you wanna try again ? ");
	scanf_s("%c",&again);
	while (getchar() != '\n');
	if (again == 'r') {
		printf("Enter the level : ");
		scanf_s("%d", &level);
		while (getchar() != '\n');
		GuessGame(level);
	}
	else
		printf("Good bye");
	system("pause");
}
