// cypher.c
#include <stdio.h>
#include "encrypt.h"

int main() {
	extern int shift;
	char msg[100];

	//�޽��� �Է� �ޱ�
	printf("Enter a messgae to encrypt: ");
	fgets(msg, sizeof(msg), stdin);
	// scanf_s()�Լ��� ����� �� �پ���� ���� �� ������
	// fgets() �Լ��� ����ϸ� ��ü �پ��� ���� ���� �� �ִ�.
	
	printf("How many letters to shift? ");
	scanf_s("%d", &shift);

	encrypt(msg);
	
	printf("Encrypted:  %s\n", msg);

	getch();

	return 0;
}