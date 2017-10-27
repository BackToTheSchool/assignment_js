#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	char question[200] = {'\0'}; int answer;
	printf("Ask me a question.\n");
	fgets(question,sizeof(question),stdin);
	srand(time(NULL));
	answer = 0;
	answer = (rand() % 4) + 1;
	switch (answer) {
	case 1: printf("Maybe"); break; system("pause");
	case 2: printf("Ask me later"); break; system("pause");
	case 3: printf("Yes"); break; system("pause");
	case 4: printf("No"); break; system("pause");
	}
	
	system("pause");
}