#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "Tutu.h"


void punkt(Start *pt)
{
	int N = 1 + rand() % 10;
	switch (N)
	{
	case 1:
		{
		strcpy(pt->Punkt, "��������");
		}
		break;
	case 2:
	{
		strcpy(pt->Punkt, "������");
	}
	break;
	case 3:
	{
		strcpy(pt->Punkt, "������");
	}
	break;
	case 4:
	{
		strcpy(pt->Punkt, "�������");
	}
	break;
	case 5:
	{
		strcpy(pt->Punkt, "��������");
	}
	break;
	case 6:
	{
		strcpy(pt->Punkt, "������");
	}
	break;
	}
}
void punkt2(End *pt)
{
	int N = 1 + rand() % 10;
	switch (N)
	{
	case 1:
	{
		strcpy(pt->Punkt, "��������");
	}
	break;
	case 2:
	{
		strcpy(pt->Punkt, "������");
	}
	break;
	case 3:
	{
		strcpy(pt->Punkt, "������");
	}
	break;
	case 4:
	{
		strcpy(pt->Punkt, "�������");
	}
	break;
	case 5:
	{
		strcpy(pt->Punkt, "��������");
	}
	break;
	case 6:
	{
		strcpy(pt->Punkt, "������");
	}
	break;
	}
}
void Times(Time *pt)
{
	pt->Hour = 1 + rand() % 23;
	pt->minute = 1 + rand() % 59;
}



TutuTu *Poezde(const int *kol)
{
	TutuTu *poez = (TutuTu*)calloc(*kol, sizeof(TutuTu));
	if(poez!=NULL)
	for (int i = 0;i < *kol;i++)
	{
		poez[i].NomerTutu = 1 + rand() % 12;
		punkt(&poez[i].Starte);
		Times(&poez[i].Starte.timeStart);
		punkt2(&poez[i].Ende);
		Times(&poez[i].Ende.timeEnd);
	}
	return poez;
}
void Printinfo(TutuTu *pt)
{
	printf("����� -%d\n", pt->NomerTutu);
	printf("�������� �����:%s ����� �������: %d:%d\n",pt->Starte.Punkt, pt->Starte.timeStart.Hour, pt->Starte.timeStart.minute);
	printf("�����:%s ����� ��������: %d:%d\n", pt->Ende.Punkt, pt->Ende.timeEnd.Hour, pt->Ende.timeEnd.minute);
}
void Dolgo(TutuTu *pt)
{
	for (int i = 0;i < 10;i++)
	{
		if (((pt[i].Starte.timeStart.Hour * 60 + pt[i].Starte.timeStart.minute)-(pt[i].Ende.timeEnd.Hour * 60 + pt[i].Ende.timeEnd.minute)) > 440)
		{
			Printinfo(&pt[i]);
		}
	}
}

