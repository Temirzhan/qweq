#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include "Perosnality.h"
#include "Tututi.h"
#include "machines.h"


void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int N;
	scanf("%d", &N);
	switch (N)
	{
	case 1:
	{
		int Kol;
		Ingener *pt = Personal(&Kol);
		 BaulkiAndDedulki(pt, Kol);

	}
		break;
	case 2:
	{
		int kol=10;
		TutuTu *pt = Poezde(&kol);
		Dolgo(pt);
	}
	break;
	case 3:
	{
		int Kol;
			Ingener2 *pt=Personal2(&Kol);
			Mazhori(pt, Kol);
	}
	break;
	case 4:
	{
		int Kol = 10;
		Machin* pt = Newmachine(&Kol);
	}
	break;
	}

}