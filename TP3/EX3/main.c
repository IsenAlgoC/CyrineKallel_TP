#include <stdlib.h> 
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>
#include <stdbool.h>
#define NBMAXNOTES 30

void permutaion(float* a, float* b) //fonction utile pour le tri 
{
	float tmp = *a;
	*a = *b;
	*b = tmp;
}


int main()
{
	float note [NBMAXNOTES];
	float max, min, sum = 0;
	float NoteEntree = 0;
	int i = 0, nbAbs = 0, nbValide = 0;

	for (int i = 0; i < NBMAXNOTES; i++)
	{
		note[i] = -2; //précision de deux chiffres après la virgule
	
		printf("\nEntrez note no [%d] : ", i + 1);
		scanf_s("%f", &NoteEntree);

		if (NoteEntree < 0 || NoteEntree > 20) // On Verifie que la note est comprises en 0 et 20
		{
			char Reponse;
			_cputs("L'eleve est-il (A)bsent Ou voulez-vous arrêter la saisie (O)ui (N)on  ? \n");
			Reponse = _getch();
			if (Reponse == 'A')
			{
				// Dans le cas où l'utilisateur réponds absent; 

				nbAbs = nbAbs + 1;
				note[i] = -1; //on incrémente le compteur des absences
			}
			else if (Reponse == 'O')
			{
				i = 31;
			}
			else if (Reponse == 'N')
			{
				i = i - 1;
			}
			else
			{
				i = i - 1;
			}
		}
		else
		{
			nbValide += 1;
			sum += NoteEntree;
			note[i] = NoteEntree;
		}
		printf("%.2f", note[i]);

	}

	float tmp;
	min = note[0];
	max = note[0];
	for (i = 1; i < NBMAXNOTES; i++) {
		if (note[i] >= 0) 
		{
			tmp = note[i];
			if (tmp > max) 
			{
				max = tmp;
			}
			else if (tmp < min) 
			{
				min = tmp;
			}
		}
	}
	float moy = 0;
	moy = (sum / nbValide);
	printf("\nLe nombre de notes valides est : %d",nbValide);
	printf("\nLe nombre d'abscences est : %d ", nbAbs);
	printf("\nLa moyenne est de : %.2f", moy);
	printf("\nLe plus petit nombre est : %.2f", min);
	printf("\nLe plus grand nombre est : %.2f", max);
	
	// Calcul de l'écart type; 
	float ecartM = 0;
	for (i= 0;i < NBMAXNOTES; i++)
	{
		if (note[i] > 0) 
		{
			ecartM = (float)pow((note[i] - moy), 2);
		}
	}
	float ecartT = (float)sqrt(ecartM/ nbValide);
	printf("\n L'Ecart Type est de : %.2f", ecartT);
	
	// Affichage du Tableau des Notes; 
	printf("\n no de Note  Valeur de la Note ");
	int CompteurAffichage = 0;
	for (i = 0; i < NBMAXNOTES; i++)
	{
		if (note[i] > 0) 
		{
			CompteurAffichage += 1;
			printf("\n %d", CompteurAffichage);
			printf("\t\t  %.2f \n", note[i]);
		}
	}


	int Tabindex[30]; // On créer le Tableau des index.

	for (int i = 0; i < NBMAXNOTES; i++) 
	{
		Tabindex[i] = i;
	}

	// Tri des notes et affichage des notes par ordre décroissant avec l'indice correspondant
	for (int CompteurTri = 0; CompteurTri < NBMAXNOTES; CompteurTri++) {
		for (i= 0; i < NBMAXNOTES - CompteurTri; i++) 
		{
			if (note[i] < note[i + 1]) 
			{
				permutaion(&note[i], &note[i + 1]);
				permutaion(&(float)Tabindex[i], &(float)Tabindex[i + 1]);
			}
		}
	}

	// Tri des notes et affichage des notes par ordre décroissant avec l'indice correspondant
	printf("\nRang     No de Note     Valeur de la Note ");
	CompteurAffichage = 0;
	for (i = 0; i< NBMAXNOTES; i++)
	{
		if (note[i] > 0) 
		{
			CompteurAffichage += 1;
			printf("\n %d", CompteurAffichage);
			printf("\t\t %d", Tabindex[i] + 1);
			printf("\t\t  %.2f \n", note[i]);
		}
	}

	system("pause");
	return (EXIT_SUCCESS);

}

