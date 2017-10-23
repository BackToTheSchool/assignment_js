#include <stdio.h>
#include <windows.h>
#include <string.h>
int pricework(int count);
//float show(int count[]);
int main() {
	int count,result,a;
	float tax, res;
	result = 0;	count = 0;	a = 1;	tax = 0; res = 0;
	printf("How many items do you have?");
	scanf_s("%d",&count);
	while (count > 0)
	{
		result = result + pricework(a);
		a++;
		count--;
	}
	
	tax = result * 0.055;
	res = tax + result;
	printf("Subtotal : $%d\nTax : $%.2f\nTotal : $%.2f ",result,tax,res);
	system("pause");

}

int pricework(int count) {
	int price, quntity, result;
	price = 0; quntity = 0; result = 0;
	printf("price of item %d : ", count);
	scanf_s("%d", &price);
	printf("Quntity of item 1 : ");
	scanf_s("%d", &quntity);
	result = price * quntity;
	return result;
}
/*float show(int count[]) {
	int a, b;
	float tax;
	a = 0; b = 0; tax = 0;
	a= strlen(count);
	while (a > 0) {
	b = b + count[a] + count[a - 1];
	}
	
	return b;
}*/