#include <stdio.h>
#include <stdlib.h>

int main() {
	int count; char direction;
	char message[12][12] = { {"���踦"} ,{"���͸�����"},{"���ڸ�"} ,{"���̺���"},{"������"}, {"���͸���"}, {"�õ���"}, {"��ȭ�÷��׸�"}, {"������"}, {"����"}, {"��ũ��"}, {"����"} };
	printf("%s", message[0]);
	scanf_s("%c",&direction);
	if (direction == 'y') {
		scanf_s("%c", &direction);
		printf("%s\n", message[1]);
		scanf_s("%c", &direction);
		
		if (direction == 'y') {
			printf("%s\n", message[2]);
		}
		else {
			printf("%s\n", message[3]);
		}
	}
	else{
		scanf_s("%c", &direction);
		printf("%s\n",message[4]);
		scanf_s("%c", &direction);
		if (direction == 'y') {
			printf("%s\n", message[5]);

			
		}
		else {
			scanf_s("%c", &direction);
			printf("%s \n", message[6]);
			scanf_s("%c", &direction);
			if (direction == 'y') {
				scanf_s("%c", &direction);
				printf("%s \n", message[7]);
				scanf_s("%c", &direction);
			}
			else {
				scanf_s("%c", &direction);
				printf("%s \n", message[8]);
				scanf_s("%c", &direction);
				if (direction == 'y') {
					scanf_s("%c", &direction);
					printf("%s \n", message[9]);
					scanf_s("%c", &direction);
					if (direction == 'y') {
						scanf_s("%c", &direction);
						printf("%s \n", message[10]);
						scanf_s("%c", &direction);
					}
					else {
						printf("%s\n", message[12]);
					}
				}
			}
		}
	}
	system("pause");
}
