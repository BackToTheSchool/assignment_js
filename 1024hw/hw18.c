#include<stdio.h>
#include<stdlib.h>
//�̹� ����� �迭�� ���ڿ� �Ҵ��ϸ� �������ϴ�, ���ڿ� ����Ʈ�Ϸ��� ��ȣ ����� ���
int main(){
	char cho,an;
	float degree,result;
	 char cel[20] = "Celcious";
	printf("Press C of F to convert.\n Enther your choice : ");
	scanf_s("%c", &cho);
	
	if (cho == 'c' || cho == 'C')
	{
		an = 'F';
		printf("Enter your temperature in %c : ",an);
		scanf_s("%f", &degree);
		result = (degree - 32) * 5 / 9;
		cho = 'C';

	}
	else if (cho == 'F' || cho == 'f') {
		an = 'C';
		printf("Enter your temperature in %c : ", an);
		scanf_s("%f", &degree);
		result = degree * 5 / 9 + 32;
		cho = 'F';
		
	}
	else {
		printf("You entered wrong key. Run this program again");
		system("pause");
		return 0;
	}
	printf("Degree from %c to %c : %.1f",cho,an,result);
	system("pause");
}