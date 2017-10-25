#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	float amount,ctax,tax,ttax;
	char state[20];
	char county[20],dol[10];
	ctax = 0;
	printf("What is order amount? ");
	fgets(dol,sizeof(dol),stdin);
	amount = atof(dol);
	printf("Which state do you live? ");
	fgets(state, sizeof(state), stdin);
	state[strlen(state)- 1 ] = '\0';
	if (!strcmp(state,"Wisconsin") || !strcmp( state ,"Wi")) {
		printf("Which county do you live ? ");
		fgets(county,sizeof(county),stdin);
		county[strlen(county) - 1] = '\0';
		tax = amount * 0.055;
		if (!strcmp(county,"Eau Claire")) {
			ctax = amount * 0.005;
		}
		else if (!strcmp(county, "Dunn")) {
			ctax = amount * 0.004;
		}
	}
	else if (!strcmp(state, "Illinois")|| !strcmp(state ,"Il")) {
		tax = amount * 0.08;
	}
	else {
		tax = amount * 0.050;
	}
	ttax = tax + ctax;
	amount = amount + ttax;
	printf("\"The State tax is $%.2f.\"\n\"The county tax is $%.2f\"\n\"The total tax is $%.2f\"\n\"The total is $%.2f\"",tax,ctax,ttax,amount);
	system("pause");
}

