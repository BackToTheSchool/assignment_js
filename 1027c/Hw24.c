#include <stdio.h>
#include <stdlib.h>

int main() {
	char fiWord[10];
	char seWord[10];
	int length = 0;
	int fiCount = 0;
	int seCount = 0;
	int fiSame;
	int result;
	int seSame;
	result = 0;
	fiSame = 0;
	seSame = 0;
	printf("Enter the word : ");
	fgets(fiWord, sizeof(fiWord), stdin);
	printf("Enter the word : ");
	fgets(seWord, sizeof(seWord), stdin);
	if (strlen(fiWord) < strlen(seWord))
		length = strlen(fiWord);
	else
		length = strlen(seWord);
	for (fiCount = 0; fiCount < length; fiCount++) {
		for (seCount = 0; seCount < length; seCount++) {
			if (fiWord[fiCount] == fiWord[seCount]) {
				if (fiCount != seCount) {
					fiSame++;
				}
			}

		}
	}
	for (fiCount = 0; fiCount < length; fiCount++) {
		for (seCount = 0; seCount < length; seCount++) {
			if (seWord[fiCount] == seWord[seCount]) {
				if (fiCount != seCount) {
					seSame++;
				}
			}

		}
	}
	for (fiCount = 0; fiCount < length; fiCount++) {
		for (seCount = 0; seCount < length; seCount++) {
			if (fiWord[fiCount] == seWord[seCount]) { result++; }

		}
	}
	if (fiSame + seSame == 0) {
		if (result == length) {
			printf("Two words are anagram");
		}
		else { printf("Two words are not anagram"); }

	}
	else {
		if (fiSame == seSame) {
			if (result - fiSame < 0) {
				printf("Two words are not anagram.");

			}
			else if (result - fiSame == length) {
				printf("Two words are anagram");
			}
			else {
				printf("Two words are not anagram.");
			}

		}
	}
	system("pause");
}