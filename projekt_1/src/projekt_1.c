/*
 *main.c
 *
 *
 Created on:9 ���.2019�.
 *Author:Anna
 */

#include <stdio.h>
#include <locale.h>


int main(void) {
	int num_1; // ���������� ���� int ��� ������� ������ �����
	int num_2; // ���������� ���� int ��� ������� ������ �����
	char exit; // ���������� ���� char ��� ������ �� ���������
	float result; // ��������� �������� ������ �����
	int i;
	int mass[10] = {1,3,5,6,7,8,8};

	setlocale(LC_ALL, "Russian");

	do {
		puts("����������, ����. ���� ������������ ��������� ��� ���������� �������� ������ �����. P.s. ��� ������ �� ��������� ��� 'q'. ����� ������ ����� �����: \n");
		if (scanf("%i", &num_1)) {
			printf("�������! \n");
		} else {
			do {
				puts("��, ������. ��������� ������ ����� �����.�������� �����: \n");
			} while (scanf("%i", &num_1));
		}
		puts("����� ������ ����� �����: ");
		if (scanf("%i", &num_2)) {
			puts("�������. \n");
		} else {
			do {
				puts("��, ������. ��������� ������ ����� �����.�������� �����: \n");
			} while (scanf("%i", &num_2));
		}
		result = num_1 + num_2;
		puts("���� ������ ���������� ����������, ��� 'h'. ���� ������ ����� �� ���������, ��� 'q' \n"); // �������� ��� ������ �� ���������
		scanf("%c", &exit);

		if ((num_1 % 2 == 0) && (num_2 % 2 == 0)) // �������� ��� ������ � �������� �����
				{
			printf("��������� �������� ������ �����: %i + %i = %f\n", num_1,
					num_2, result);
		} else {
			printf("��, ������. ���������� �������� �������� ����� �� ����������� � ������ ���������! \n"); // ������ ��� ����� ���� �� ������ ��������� �����
		}

	} while (exit != 'q'); // ���������� ����� ��� ����� 'q'
	puts("���������� ���������.. ");

	return 0;
}