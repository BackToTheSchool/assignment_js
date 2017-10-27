#include <stdio.h>

int main() {
	int fiNum, seNum;
	for (fiNum = 0; fiNum < 13; fiNum++)
		for (seNum = 0; seNum < 13; seNum++)
			printf("%d * %d = %d\n",fiNum,seNum,(fiNum*seNum));
	
	system("pause");
}