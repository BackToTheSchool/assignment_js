#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void MakePassword(int length, int chLength, int nuLength);
int main() {
	int length, chLength, nuLength;
	printf("What is the minimum length ? ");
	scanf_s("%d",&length);
	while (getchar()!='\n');
	printf("How many special characters ? ");
	scanf_s("%d", &chLength);
	while (getchar() != '\n'); 
	printf("How many numbers ? ");
	scanf_s("%d", &nuLength);
	while (getchar() != '\n');
	MakePassword(length,chLength,nuLength);
	system("pause");
	
}
void MakePassword(int length,int chLength,int nuLength) {
	char spC[4] = "!@#$";
	char paC[7] = "abcdefg";
	char password[20] = { '\0' };
	int count;
	int cha;
	srand(time(NULL));
	for (count = 0; count < chLength; count++) {
		cha = rand() % 4 ;
		password[count] = spC[cha];
	}
	nuLength = nuLength + count;
	for (; count < nuLength; count++) {
		cha = rand() % 9 + 48;
		password[count] =  cha;
	}
	for (; count < length; count++) {
		cha = rand() % 7;
		password[count] = paC[cha];
	}
	printf("Your password is %s",password);

}