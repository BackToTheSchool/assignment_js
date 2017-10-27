#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
struct Human {
	char firstName[20];
	char secondName[20];
	char zipCode[10];
	char emplooyeeID[10];
};
void CheckHuman(struct Human Input);
int main() {
	struct Human tired;
	char inputN[20] = {"\0"};
	char inputSN[20] = { "\0" };
	char inputZC[20] = {"\0"};
	char inputID[20] = { "\0" };
	printf("Enter the first name : ");
	fgets(inputN,sizeof(inputN),stdin);
	//inputN[strlen(inputN) - 1] = "\0";
	strcpy_s( tired.firstName,sizeof(tired.firstName),inputN);
	printf("Enter the second name : ");
	fgets(inputSN, sizeof(inputSN), stdin);
	inputSN[strlen(inputSN) - 1] = "\0";
	strcpy_s( tired.secondName, sizeof(tired.secondName), inputSN);
	printf("Enter the ZIP code : ");
	fgets(inputZC, sizeof(inputZC), stdin);
	inputZC[strlen(inputZC) - 1] = "\0";
	strcpy_s( tired.zipCode, sizeof(tired.zipCode), inputZC);
	printf("Enter the employee ID : ");
	fgets(inputID, sizeof(inputID), stdin);
	inputID[strlen(inputID) - 1] = "\0";
	strcpy_s( tired.emplooyeeID, sizeof(tired.emplooyeeID), inputID);
	CheckHuman(tired);
}

void CheckHuman(struct Human Input) {
	int lengthH[4] = { 0 }; int result[4] = { 0 }; int count; int seCount;
	lengthH[0] = strlen(Input.firstName)-1;
	lengthH[1] = strlen(Input.secondName)-1;
	seCount = 0;
	for (count = 0; count < lengthH[0]; count++) {
		if (isdigit(Input.firstName[count])) {
			result[0]++;
		}
		if (isdigit(Input.secondName[count])) {
			result[1]++;
		}
	}
	for (count = 0; count < strlen(Input.zipCode) - 1; count++) {
		if (!isdigit(Input.zipCode[count])) {
			result[2]++;
		}
	}
	for (count = 0; count < 2; count++) {
		if (!isalpha(Input.emplooyeeID[count])) {
			result[3]++;
		}
	}
	for (count = 3; count < strlen(Input.emplooyeeID); count++) {
		if (!isdigit(Input.emplooyeeID[count])) {
			result[3]++;
		}
	}
	if (lengthH[0] < 2 || lengthH[1] < 2||result[0]>0||result[1]>0) {
		printf("Error with name \n");
	}
	if (result[2]>0) {
		printf("Error with Zip code\n");
	}
	if(Input.emplooyeeID[2] != '-'|| strlen(Input.emplooyeeID) - 1 != 7||result[3]>0){
		printf("Error with employee ID");
	}
	else {
		printf("There are no errors");
	}
	system("pause");
}
