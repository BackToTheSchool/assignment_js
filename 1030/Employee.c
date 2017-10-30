#include <stdio.h>
#include <stdlib.h>

typedef struct _Employee {
	char *firstName;
	char *lastName;
	char *position;
	char *date;
	struct Employee *next;

}Employee;
void linkEmployee(Employee *head, Employee *node); 
void addEmployee(Employee *head,char fiName[], char seName[], char position[], char date[]);
void showEmployee(Employee *head);
int main() {

	Employee(*p)[7] = { malloc(sizeof(Employee)) };
	int a, b;
	addEmployee(p[0], "John", "Johnson", "Manager", "20161231");
	addEmployee(p[1],"Tou","Xiong","Software engineer","20161015");
	addEmployee(p[2],"Michaela","Michaelson","District manager","20151219");
	addEmployee(p[3],"Jake","Jacobson","Programmer",NULL);
	addEmployee(p[4],"Jacquelyn","Jackson","DBA",NULL);
	addEmployee(p[5],"Sally","Weber","Web developer","20151218");
	
	system("pause");
}

void linkEmployee(Employee *head, Employee *node) {
	if (head->next == NULL) {
		head->next = node;
	}
	else
		linkEmployee(head->next,node);
	
}

void addEmployee(Employee *head, char fiName[], char seName[], char position[], char date[]) {
	head->firstName = fiName;
	head->lastName = seName;
	head->position = position;
	head->date = date;
	head->next = NULL;
}
void showEmployee(Employee *head) {
	if (head->next != NULL) {
		printf("%s    %s    %s    %s\n", head->firstName, head->lastName, head->position, head->date);
		showEmployee(head->next);
	}
	if (head->next == NULL) {
		printf("%s    %s    %s    %s\n", head->firstName, head->lastName, head->position, head->date);
	}

}

void sortEmployee(Employee *head) {
	char compare[20] = { "\0" };

}
