#include <stdio.h>
#include<windows.h>
#include<string.h>
#include<ctype.h>
int check(char *p);
//char check(char *some);
int main(){
	char sex[20],drink[20],weigh[20],hou[20];
	char *ch;
	int drin, hour,s;
	float weig,result;
	printf("Are you male or female ? ");
	fgets(sex,sizeof(sex),stdin);
	printf("How much oz did you drink ? ");
	fgets(drink,sizeof(drink),stdin);
	ch = drink;
	printf("%c\n", ch[2]);
	s = 0;
	/*s = check(ch);
	if (s > 0) {
		printf("Please enter the number. Run this program again!");
		system("pause");
	}*/
	/*while (!isdigit(drink)) {
		printf("Enter the number. ");
		fgets(drink, sizeof(drink), stdin);
	}*/
	//dri = check(dri);
	drin = atoi(drink);
	printf("How much do you weigh?");
	fgets(weigh, sizeof(weigh), stdin);
	
	/*while (!isdigit(weigh)) {
		printf("Enter the number. ");
		fgets(weigh, sizeof(weigh), stdin);
	}*/
	weig = atof(weigh);
	printf("When did you drink? ex) 1 hour ago");
	fgets(hou,sizeof(hou),stdin);

	/*while (!isdigit(hou)) {
		printf("Enter the number. ");
		fgets(hou, sizeof(hou), stdin);
	}*/
	//h = check(h);
	hour = atoi(hou);
	sex[strlen(sex) - 1] = '\0';
	
	
	if (!strcmp(sex, "male")) {
		result = (drin*5.14 / weig*0.73) - (0.015*hour);
	}
	else if (!strcmp(sex, "female")) {
		result = (drin*5.14 / weig*0.6) - (0.015*hour);
	}
	else{
		printf("Who are you? Run this programm again");
		system("pause");
	}
	if (result >= 0.08) {
		printf("Your BAC is %.3f%% You can't drive.", result);
	}
	else
		printf("Your BAC is $.3f%% You can drive.", result);
	
	system("pause");
}
/*char check(char *some) {
	while (!isdigit(some)) {
		printf("Enter the number. ");
		fgets(some, sizeof(some), stdin);
	}
	return some;
}*/
int check(char *p) {
	int a, b,c;
	a = strlen(p);
	b = 0; c = 0;
	for (b; b < a; b++) {
		if (isdigit(p[b])) {
			c++;
		}
		else if (c>0) {
			return c;
			
		}
	}
	
}