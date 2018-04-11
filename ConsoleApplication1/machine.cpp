#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "Machine.h"





void Mark(char *pt)
{
	int N = 1 + rand() % 10;
	switch (N)
	{
	case 1:
	{
		strcpy(pt, "Toyota");
	}
	break;
	case 2:
	{
		strcpy(pt, "Honday");
	}
	break;
	case 3:
	{
		strcpy(pt, "Nisan");
	}
	break;
	case 4:
	{
		strcpy(pt, "Peugeot");
	}
	break;
	}
}
void tip(char *pt)
{
	int N = 1 + rand() % 10;
	switch (N)
	{
	case 1:
	{
		strcpy(pt, "Универсал");
	}
	break;
	case 2:
	{
		strcpy(pt, "Кросовер");
	}
	break;
	case 3:
	{
		strcpy(pt, "Хэчбэк");
	}
	break;
	case 4:
	{
		strcpy(pt, "Внедорожник");
	}
	break;
	}
}
Machin *Newmachine(int *Kol)
{
	*Kol = 1 + rand() % 100;
	Machin* pt = (Machin*)calloc(*Kol, sizeof(Machin));
	for (int i = 0;i < 10;i++)
	{
		Mark(pt[i].Machine);
		tip(pt[i].Tipe);
		pt[i].year = 1990 + rand() % 28;
		pt[i].d.day = 1 + rand() % 28;
		pt[i].d.year = 2007 + rand() % 5;
		pt[i].d.month = 1 + rand() % 12;
	}
	return pt;
}

void toyota(Machin *pt)
{
	for (int i = 0;i < 10;i++)
		if (strcmp(pt[i].Machine, "Toyota") == 0 && pt[i].year > 2007)
		{

		}
}