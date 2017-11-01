#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct _Employee {
	char *firstName;
	char *lastName;
	char *position;
	char *date;
	struct _Employee *next;
	struct _Employee *before;

}Employee;
void linkEmployee(Employee *head, Employee *node); 
void addEmployee(Employee *head,char fiName[], char seName[], char position[], char date[]);
void showEmployee(Employee *head);
void deleteEmployee(Employee *head, char name[]);
int main() {
	char name[20] = { "\0" };
	Employee (*p)[6] = { malloc(sizeof(Employee)) };
	int a;
	addEmployee(p[0], "John", "Johnson", "Manager", "20161231");
	addEmployee(p[1],"Tou","Xiong","Software engineer","20161015");
	addEmployee(p[2],"Michaela","Michaelson","District manager","20151219");
	addEmployee(p[3],"Jake","Jacobson","Programmer",NULL);
	addEmployee(p[4],"Jacquelyn","Jackson","DBA",NULL);
	addEmployee(p[5],"Sally","Weber","Web developer","20151218");
	for(a =1 ; a < 6;a++)
	linkEmployee(p[0],p[a]);
	showEmployee(p[0]);
	printf("Enter the last Name you want to delete : ");
	fgets(name,sizeof(name),stdin);
	name[strlen(name) - 1] = '\0';
	deleteEmployee(p[0], name);
	system("pause");
}

void linkEmployee(Employee *head, Employee *node) {
	if (strcmp(head->lastName, node->lastName) == -1) {
		if (head->next == NULL) {
			head->next = node;
			node->before = head;
		}
		else if (strcmp(head->next->lastName, node->lastName) == 1) {
			node->next = head->next;
			node->before = head;
			head->next->before = node;
			head->next = node;
		}
		else {
			linkEmployee(head->next,node);
		}
	}
	else if (strcmp(head->lastName, node->lastName) == 1) {
		if (head->before == NULL) {
			head->before = node;
			node->next = head;
		}
		else if (strcmp(head->before->lastName, node->lastName) == -1) {
			node->before = head->before;
			node->next = head;
			head->before->next = node;
			head->before = node;
		}
		else
			linkEmployee(head->before,node);
	}
	/*if (head->lastName < node->lastName) {
		if (head->next == NULL) {
			head->next = node;
			node->before = head;
		}
		else if (head->next->lastName > node->lastName && head->lastName < node->lastName) {
			head->next->before = node;
			node->before = head;
			node->next = head->next;
			head->next = node;
		}
		else
			linkEmployee(head->next,node);
	}
	else if(head->lastName > node->lastName) {
		if (head->before == NULL) {
			head->before = node;
			node->next = head;
		}
		else if (head->before->lastName < node->lastName && head->lastName > node->lastName) {
			head->before->next = node;
			node->before = head->before;
			node->next = head;
			head->before = node;
		}
		else {
			linkEmployee(head->before, node);
		}
	}*/
	}

void addEmployee(Employee *head, char fiName[], char seName[], char position[], char date[]) {
	head->firstName = fiName;
	head->lastName = seName;
	head->position = position;
	head->date = date;
	head->next = NULL;
	head->before = NULL;
}
void showEmployee(Employee *head) {
	while (head->before != NULL) {
		head = head->before;
	}
	while (head->next != NULL) {
		printf("%s    %s    %s    %s\n", head->firstName, head->lastName, head->position, head->date);
		head = head->next;
	}
	printf("%s    %s    %s    %s\n", head->firstName, head->lastName, head->position, head->date);

}

void deleteEmployee(Employee *head, char name[]) {
	while (head->before != NULL) {
		head = head->before;
	}
	while (strcmp(head->lastName, name)!=0) {
		head = head->next;
		if (head->next == NULL)
			if(strcmp(head->lastName, name) != 0){
				printf("You entered wrong name");
				break;
			}
			else {
				head->before->next = head->next;
				head->next->before = head->before;
				showEmployee(head->before);
			}
			
	}
	head->before->next = head->next;
	head->next->before = head->before;
	showEmployee(head->before);
}
