#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int test = 1; //permer de cheker si programme doit etre relancé
	do
	{


		printf("\nVeuillez saisir uniquement des valeurs entre 1 et 150 cm.\n");

		float longueur = 151;
		float largeur = 151;
		float hauteur = 151;

		while (largeur > 150)
		{
			printf("\nEntrer largeur: ");
			scanf_s("%f", &largeur);
		}
		while (longueur > 150)
		{
			printf("\nEntrer longueur: ");
			scanf_s("%f", &longueur);
		}


		while (hauteur > 150)
		{
			printf("\nEntrer hauteur: ");
			scanf_s("%f", &hauteur);
		}

		// On verifie les dimensions du bagage

		if ((longueur <= 55) && (largeur <= 35) && (hauteur <= 25))
		{
			printf("\nVALIDE\n");
		}

		else
		{
			printf("\nNON VALIDE\n");
		}

		printf("Entrez 1 pour recommencer le programme ou 0 pour arreter : ");
		scanf_s("%d", &test);

		
		system("pause");

	
	} while (test == 1);

}