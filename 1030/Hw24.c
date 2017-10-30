#include <stdio.h>
#include <stdlib.h>

int main() {
	char fiWord[10];
	char seWord[10];
	int fiCount;
	int seCount;
	char compare;
	
	printf("Enter the word : ");
	fgets(fiWord, sizeof(fiWord), stdin);
	printf("Enter the word : ");
	fgets(seWord, sizeof(seWord), stdin);
	for(fiCount = 0; fiCount <strlen(fiWord);fiCount++)
		for (seCount = 0; seCount < strlen(fiWord); seCount++) {
			if (seWord[fiCount] > seWord[seCount])
			{
				compare = seWord[fiCount];
				seWord[fiCount] = seWord[seCount];
				seWord[seCount] = compare;
			}
			if (fiWord[fiCount] > fiWord[seCount]) {
				compare = fiWord[fiCount];
				fiWord[fiCount] = fiWord[seCount];
				fiWord[seCount] = compare;
			}
		}
	if (!strcmp(fiWord, seWord)) {
		printf("Two words are anagram");
	}
	else
		printf("Two words are not anagram");

	system("pause");
}