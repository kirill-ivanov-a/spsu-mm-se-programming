#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <float.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS

//���������� ������
int gcd08(int a, int b) 
{
	int nod = 1L;
	int tmp;
	if (a == 0L)
		return b;
	if (b == 0L)
		return a;
	if (a == b)
		return a;
	if (a == 1L || b == 1L)
		return 1L;
	while (a != 0 && b != 0) 
	{
		if (((a & 1L) | (b & 1L)) == 0L) 
		{
			nod <<= 1L;
			a >>= 1L;
			b >>= 1L;
			continue;
		}
		if (((a & 1L) == 0L) && (b & 1L)) 
		{
			a >>= 1L;
			continue;
		}
		if ((a & 1L) && ((b & 1L) == 0L)) 
		{
			b >>= 1L;
			continue;
		}
		if (a > b) 
		{
			tmp = a;
			a = b;
			b = tmp;
		}
		tmp = a;
		a = (b - a) >> 1L;
		b = tmp;
	}
	if (a == 0)
		return nod * b;
	else
		return nod * a;
}

int pif(a, b, c)
{
	if ((a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a) && (a > 0 && b > 0 && c > 0))
	{
		printf("���������� ������\n");
		int d = gcd08(a, b);
		if (gcd08(d, c) == 1)
		{
			printf("�������-������� �����");
		}
		else 
		{
			printf("�� �������-������� �����");
		}
	}
	else
	{
		printf("�� ���������� ������");
	}
}

int main() 
{
	setlocale(LC_ALL, "Rus");

	printf("������� ������� ������������, ����� ������ - �������� �� ��� ����������� �������, � ���� ��������, �� �������-������ �� ���\n");

	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);

	pif(a, b, c);

	return 0;
}