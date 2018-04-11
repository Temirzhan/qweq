#pragma once

struct Time
{
	int Hour;
	int minute;
};
struct Start
{
	 char Punkt[40];
	Time timeStart;
};
struct  End
{
	char Punkt[40];
	Time timeEnd;
};
struct TutuTu
{
	int NomerTutu;
	Start Starte;
	End Ende;
};