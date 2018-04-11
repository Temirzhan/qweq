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
		*pol = 'ж';
	}
		break;
	case 2:
	{
		*pol = 'м';
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
	printf("Фамилия: %s\n", pt->SecondName);
	printf("Имя: %s\n", pt->FersName);
	printf("Отчество: %s\n", pt->lastName);
	printf("Пол: %c\n", pt->f);
	printf("Професия: %s\n", pt->Profesia);
	printf("Дата Рождения: %d.%d.%d\n", pt->dob.day, pt->dob.month, pt->dob.year);
}
void PrintInform2(Ingener2 *pt)
{
	printf("Фамилия: %s\n", pt->SecondName);
	printf("Имя: %s\n", pt->FersName);
	printf("Отчество: %s\n", pt->lastName);
	printf("Пол: %c\n", pt->f);
	printf("Професия: %s\n", pt->Profesia);
	printf("Дата Рождения: %d.%d.%d\n", pt->dob.day, pt->dob.month, pt->dob.year);
	printf("Зарплата=%d", pt->Zarplata);
}

void BaulkiAndDedulki(Ingener *pt, const int Kol)
{
	for (int i = 0;i < Kol;i++)
	{
		if (pt[i].f == 'ж')
			if ((2018 - pt[i].dob.year) > 60)
			{
				PrintInform(&pt[i]);
			}
		else if (pt[i].f == 'м')
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