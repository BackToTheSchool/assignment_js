#include <stdio.h>
#include <stdlib.h>

int main() {
	int count; char direction;
	char message[12][12] = { {"열쇠를"} ,{"배터리단자"},{"단자를"} ,{"케이블을"},{"차에서"}, {"배터리를"}, {"시동이"}, {"점화플래그를"}, {"엔진이"}, {"차에"}, {"초크가"}, {"서비스"} };
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
