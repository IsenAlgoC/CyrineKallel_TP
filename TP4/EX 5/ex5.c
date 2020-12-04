#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//programme qui permet d’entrer une phrase au clavier et compte le nombre de mots et la longueur moyenne des mots. 
//Utiliser la fonction gets_s() à la place de scanf() pour lire les caractères tapés au clavier. 
//La phrase est stockée dans un buffer (tableau de char) de 1024 caractères.

int main()
{
	char mot[1024];
	int size = 0;
	int nbrmot = 1;
	float moy = 0;
	int finphrase = 0;
	printf("Saisir votre phrase, elle doit se terminer par un point.\n");

		gets_s(mot, 1023);
		size = strlen(mot);
		for (int i = 0; i < 1024; i++)
		{
			if (mot[i] == ' ')
			{
			nbrmot++;
			size--;
			}
		}
		moy = size / nbrmot;
	
	printf("\nLe nombre de mots dans la phrase est de : %d\n",nbrmot);
	printf("La longueur moyenne des mots est de : %.f lettres \n", moy);
	return 0;
}