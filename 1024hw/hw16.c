#include <stdio.h>
#include <windows.h>
int main() {
	int age;
	printf("Enter your age : ");
	scanf_s("%d",&age);
	printf("%s", (age > 16 ? "You are enough old to drive car." : "You are not old enough to drive car"));

	system("pause");
}