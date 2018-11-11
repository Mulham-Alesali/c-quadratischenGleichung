  /*
Datei:				Quadratischen Gleichung.c
Autoren:			Mulham Alesali
Bearbeitungdatum:
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "h1.h"
#include "header2.h"


int main(int argc, char *argv[])
{
	double a = 0, b = 2, c = 3;
	double s,t;
	int result = quadratischenGleichung( a, b, c, &s, &t);
	switch (result)
	{
	case 0:
		printf("x1 = x2 = %f", s);
		break;
	case 1:
		printf("x1 = %f \t x2 = %f", s, t);
		break;
	case -1:
		printf("x1 = %f + %fi \t x2 = %f + %fi", s, t, s, -t);
		break;
	default:
		break;
	}



	getchar();
}

