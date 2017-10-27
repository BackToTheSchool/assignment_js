#include <Stdio.h>
#include <Stdlib.h>

int main() {
	int count,compare;
	int number[3] = { 0 };
	count = 0; compare = 0;

	for (count = 0; count < 3; count++ ) {
		printf("Enter the number : ");
		scanf_s("%d",&number[count]);
	}
	for (count = 0; count < 3; count++) {
		if (compare < number[count])
			compare = number[count];
	}
	printf("The largest number is : %d",compare);
	system("pause");
}