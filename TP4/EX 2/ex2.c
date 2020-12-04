#include <stdio.h>

#define SEPARATEUR '/' 
#define TAILLETAB1 20

int main()
{

	int MyTab1[TAILLETAB1];
	//remplir MyTab1[] avec les nombres de 1 à 20 et afficher le contenu du tableau en séparant chaque valeur par le caractère ‘/’.
	for (int i = 0; i < TAILLETAB1; i++)
	{
		MyTab1[i] = i + 1;
		printf("%d %c", MyTab1[i], SEPARATEUR);
	}

	//En utilisant une variable MyPtr1 de type pointeur d’entier que l’on initialise sur le dernier élément du tableau,
	//afficher le tableau de la fin au début en décrémentant le pointeur MyPtr jusqu’à arriver au premier élément
	int* MyPtr1 = &MyTab1[19]; // l’on initialise sur le dernier élément du tableau,
	for (MyPtr1; MyPtr1 != &MyTab1[0]; MyPtr1--)
	{
		printf("%d %c ", *MyPtr1, SEPARATEUR);
	}
	printf("%d %c", MyTab1[0], SEPARATEUR);
}