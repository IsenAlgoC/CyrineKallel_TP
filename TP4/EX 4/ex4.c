#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include <stdbool.h>

//Ecrire un programme non r�cursif qui v�rifie qu'un mot entr� au clavier est un palindrome. C�est-�-dire qu'il peut se lire dans les deux sens.

int main()
{
	char mot[50]; //on definit chaine de caractere de 50 elements
    int size;
    int halfsize;
    bool oui = true;

    printf("Entrez votre mot :\n");
    scanf_s("%s", &mot, _countof(mot));

    size= strlen(mot); //fonction permet de calculer la longueur, exprim�e en nombre de caract�res, de la cha�ne de caract�res
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