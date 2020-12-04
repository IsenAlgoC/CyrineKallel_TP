#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include <stdbool.h>

//Ecrire un programme non récursif qui vérifie qu'un mot entré au clavier est un palindrome. C’est-à-dire qu'il peut se lire dans les deux sens.

int main()
{
	char mot[50]; //on definit chaine de caractere de 50 elements
    int size;
    int halfsize;
    bool oui = true;

    printf("Entrez votre mot :\n");
    scanf_s("%s", &mot, _countof(mot));

    size= strlen(mot); //fonction permet de calculer la longueur, exprimée en nombre de caractères, de la chaîne de caractères
    halfsize = (size / 2);

    printf("\nla moitie est %d \n", halfsize);
  
    for (int i = 1; i <= halfsize; i++)
    {
        if (mot[i - 1] != mot[size - i])
        {
            oui = false;
        }
    }

    if (oui == true) 
    {
        printf ("est un palindromendrome.\n", mot);
    }

    else
    {
        printf ("n'est pas un palindromendrome.\n", mot);
    }

    return 0;

}