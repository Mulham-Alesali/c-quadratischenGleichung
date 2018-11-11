/*
Datei:				source2.c
Autoren:			Mulham Alesali
Bearbeitungdatum:	
*/

#include "header2.h"
#include <math.h>

/*
x1, x2 <- R
x1, x2 <- C, x1 = s + t i, x2 = s - t i, s, t <- R, i2= -1.
*/
int quadratischenGleichung(double a, double b, double c, double *s, double *t) 
{
	if (a == 0)
	{
		*s = *t = c / b;
		return 0;
	}
	double delta = b * b - 4 * a * c;
	if (delta >= 0)
	{
		*s = (-b + sqrt(delta)) / (2 * a);
		*t = (-b - sqrt(delta)) / (2 * a);
		return 1;
	}
	else if (delta < 0) 
	{
		*s = (-b) / (2 * a);
		*t = (-sqrt(-delta)) / (2 * a);
		return -1;
	}



	return 0;
}
