#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>
float show(char *state, int price);
int main() {
	char state[20],amount[20],*p;
	float price;
	int amounti;
	price = 0.0;
	
	printf("What is order amount? ");
	fgets(amount,sizeof(amount),stdin);
	amount[strlen(amount) - 1] = '\0';
	amounti = atoi(amount);
	printf("Select your state ws mn other :");
	fgets(state,sizeof(state),stdin);
	state[strlen(state) - 1] = '\0';
	p = state;
	price = show(p, amounti)+ amounti;
	printf("The total is $%.2f",price);

	system("pause");
}
float show(char *state, int price) {
	float tax;
	tax = 0.0;
	if (!strcmp(state, "ws")||!strcmp(state,"Ws") ) {
		tax = 0.55;
		printf("Tax : %.2f", tax);
	}
	if (!strcmp(state, "Mn")|| !strcmp(state, "mn")) {
		tax = 0.5;
	}
	if (strcmp(state, "Mn") && strcmp(state, "mn") && strcmp(state, "Ws") && strcmp(state, "ws") ) {
		tax = 0.45;
	}
	return tax;
	
}
/*
int main() {
	char state[20];
	float price = 0;
	printf("What is order amount? ");
	scanf_s("%f",&price);
	printf("Select your State : Ws Mn Others\n");
	fgets(state,sizeof(state),stdin);

	state[strlen(state) - 1] = '\0';
	printf("%s", state);


	system("pause");
	//p = state;
	//show(p,price);	
}
scanf의 경우 버퍼에 그대로 정보가 남아있어서 리눅스에 있는 fflush를 사용하거나 그래야 fgets를 사용할수있습니다.
}*/