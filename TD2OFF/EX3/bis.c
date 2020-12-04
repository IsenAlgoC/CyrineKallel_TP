#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

void main()
{
	int annee=0;
	printf("\nEntrer une annee ");
	scanf_s("%d", &annee);

	//Methode 1:
	if ((annee % 4 == 0 )&& (annee % 100 != 0) || (annee %400 == 0))
	{
		//vrai : année divisible par 4
		
		printf("\nAnnee bissextille M1");
	}
	else 
	{
		//faux : année pas divisible par 4
		printf("\nAnnee non bissextille M1");
	}

	//Methode 2:
	if (annee % 400 == 0)
	{
		printf("\nAnnee bissextille M2");
	}
	else
	{
		if (annee % 100 != 0)
		{
			if (annee % 4 == 0)
				printf("\nAnnee bissextille M2");
			else
				printf("\nAnnee non bissextille M2");

		}
	}


	

}


