#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "RUS");     //��������� ��������.
	char WORDS[100] = { 0 };      //������ ������ � ��������.
	int i;
	printf("������� ������ ��������� ��������, �������� �� ����� ��������: ");
	fgets(WORDS, 100, stdin);     //��������� ����� �� ��������, ���������� ��������, � ����������� �����.
	fflush(stdin);     //������ �����, �� ������, ���� � �� �������� ������ �������.
	float StrL = strlen(WORDS);     //����� ���������� StrL � ������� � �� ���������� �������� ��������, ������� ������� � \0.
	float WordsCount = 0;
	// ���� ��������� ������ �����������, � ��������� ���������� ��������, � ��� �� \0.
	for (i = 0; i <= StrL; i++) {
		if ((WORDS[i] == ' ') || (WORDS[i] == '\0'))
			WordsCount++;
	}
	float CharCount = (StrL - WordsCount) / WordsCount;     //���������� ���������� ���� � �������� ����� ������ � ���.
	//����� ���������� ����������.
	printf("���� � ������: %.0f\n������� ���������� �������� � �����: %.3f", WordsCount, CharCount);
	return 0;
}