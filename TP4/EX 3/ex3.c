#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//Ecrire un programme qui demande à l’utilisateur un nom, un prénom ainsi que le sexe (H ou F) et qui affiche le nom complet sous la forme :
//Madame Annie Fratellini ou Monsieur Paul Verlaine.
//Les chaines peuvent contenir jusqu’à 20 caractères, ou plutôt 19, si on considère la valeur 0 qui termine une chaîne de caractères.

int main(int argc, const char* argv[])
{
	char nom[19];
	char prenom[19];
	char sexe;

	printf("Etes vous une (F)emme ou un (H)omme ?\n");
	sexe = getchar();
	printf("Entrez votre nom: ");
	scanf_s ("%s", &nom, _countof(nom));
	printf("Entrez votre prenom: ");
	scanf_s ("%s", &prenom, _countof(prenom));
	
	if (sexe == 'F')
	{
		printf("MADAME %s %s", prenom, nom);
	}
	else if (sexe == 'H')
	{
		printf("Monsieur %s %s", prenom, nom);
	}


	return 0;

}