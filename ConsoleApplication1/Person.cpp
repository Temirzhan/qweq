#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "Person.h"

void  secondName(char * name, int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		*(name + i) = (char)(95 + rand() % 25);
	}
	*(name + length) = '\0';
}
void ferstName(char * name, int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		*(name + i) = (char)(95 + rand() % 25);
	}
	*(name + length) = '\0';
}
void lastName(char * name, int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		*(name + i) = (char)(95 + rand() % 25);
	}
	*(name + length) = '\0';
}
void Profesia(char * name, int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		*(name + i) = (char)(95 + rand() % 25);
	}
	*(name + length) = '\0';
}

void Gender(char *pol)
{
	int N = 1 + rand() % 2;
	switch (N)
	{
	case 1:
	{
		*pol = '�';
	}
		break;
	case 2:
	{
		*pol = '�';
	}
	break;
	}
}




Ingener* Personal(int *Kol)
{
	*Kol = 1 + rand() % 100;
	Ingener* personal = (Ingener*)calloc(*Kol, sizeof(Ingener));
	if (personal != NULL)
	{
		for (int i = 0;i < *Kol;i++)
		{
			secondName(personal[i].SecondName, 10);
			ferstName(personal[i].FersName, 10);
			lastName(personal[i].lastName, 10);
			Profesia(personal[i].Profesia, 10);
			Gender(&personal[i].f);
			personal[i].dob.day = 1 + rand() % 30;
			personal[i].dob.year = 1940 + rand() % 30;
			personal[i].dob.month = 1 + rand() % 12;
		}
	}
	return personal;
}
void PrintInform(Ingener *pt)
{
	printf("�������: %s\n", pt->SecondName);
	printf("���: %s\n", pt->FersName);
	printf("��������: %s\n", pt->lastName);
	printf("���: %c\n", pt->f);
	printf("��������: %s\n", pt->Profesia);
	printf("���� ��������: %d.%d.%d\n", pt->dob.day, pt->dob.month, pt->dob.year);
}
void PrintInform2(Ingener2 *pt)
{
	printf("�������: %s\n", pt->SecondName);
	printf("���: %s\n", pt->FersName);
	printf("��������: %s\n", pt->lastName);
	printf("���: %c\n", pt->f);
	printf("��������: %s\n", pt->Profesia);
	printf("���� ��������: %d.%d.%d\n", pt->dob.day, pt->dob.month, pt->dob.year);
	printf("��������=%d", pt->Zarplata);
}

void BaulkiAndDedulki(Ingener *pt, const int Kol)
{
	for (int i = 0;i < Kol;i++)
	{
		if (pt[i].f == '�')
			if ((2018 - pt[i].dob.year) > 60)
			{
				PrintInform(&pt[i]);
			}
		else if (pt[i].f == '�')
			if ((2018 - pt[i].dob.year) > 60)
			{
				PrintInform(&pt[i]);
			}
	}
}

Ingener2* Personal2(int *Kol)
{
	*Kol = 1 + rand() % 100;
	Ingener2* personal = (Ingener2*)calloc(*Kol, sizeof(Ingener2));
	if (personal != NULL)
	{
		for (int i = 0;i < *Kol;i++)
		{
			secondName(personal[i].SecondName, 10);
			ferstName(personal[i].FersName, 10);
			lastName(personal[i].lastName, 10);
			Profesia(personal[i].Profesia, 10);
			Gender(&personal[i].f);
			personal[i].dob.day = 1 + rand() % 30;
			personal[i].dob.year = 1940 + rand() % 50;
			personal[i].dob.month = 1 + rand() % 12;
			personal[i].Zarplata = 32000 + rand() % 50000;
		}
	}
	return personal;
}


void Mazhori(Ingener2* pt,const int Kol)
{
	for (int i = 0;i < Kol;i++)
	{
		if (2018- pt[i].dob.year<30)
			if (pt[i].Zarplata>50000)
			{
				PrintInform2(&pt[i]);
			}
	}
}