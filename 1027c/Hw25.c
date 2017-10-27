#include<stdio.h>
#include<ctype.h>
void Check(char password[]);
int main() {
	char password[20] = { '\0' };
	printf("Enter the password : ");
	fgets(password,sizeof(password),stdin);
	password[strlen(password) - 1] = "\0";
	Check(password);
	system("pause");
}

void Check(char password[]) {
	int length,count,countN,countC;
	length = strlen(password)-1;
	countN = 0;
	countC = 0;
	printf("%d\n",length);
	for (count = 0; count < length; count++) {
		if (isdigit(password[count])) {
			countN++;
		}
		else if (isalpha(password[count])) {
			countC++;
		}
	}
	if (length < 8) {
		if (countN == length) {
			printf("It's very weak password");
		}
		else {
			printf("It's weak password");
		}
	}
	else if (countN == length || countC == length) {
		printf("It's weak password");
	}
	else{
		if (countN + countC == length) {
			printf("It's strong password");
		}
		else {
			printf("It's very strong password");
		}
	}
}