#include <stdio.h>

#define SEPARATEUR '/' 
#define TAILLETAB1 20

int main()
{

	int MyTab1[TAILLETAB1];
	//remplir MyTab1[] avec les nombres de 1 � 20 et afficher le contenu du tableau en s�parant chaque valeur par le caract�re �/�.
	for (int i = 0; i < TAILLETAB1; i++)
	{
		MyTab1[i] = i + 1;
		printf("%d %c", MyTab1[i], SEPARATEUR);
	}

	//En utilisant une variable MyPtr1 de type pointeur d�entier que l�on initialise sur le dernier �l�ment du tableau,
	//afficher le tableau de la fin au d�but en d�cr�mentant le pointeur MyPtr jusqu�� arriver au premier �l�ment
	int* MyPtr1 = &MyTab1[19]; // l�on initialise sur le dernier �l�ment du tableau,
	for (MyPtr1; MyPtr1 != &MyTab1[0]; MyPtr1--)
	{
		printf("%d %c ", *MyPtr1, SEPARATEUR);
	}
	printf("%d %c", MyTab1[0], SEPARATEUR);
}