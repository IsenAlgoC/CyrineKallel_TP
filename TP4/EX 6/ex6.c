#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <time.h>    

//programme qui recherche et affiche toutes les positions d’une valeur donnée dans un tableau de 100 entiers compris entre 0 et 20.
//Le tableau est initialisé avec des nombres aléatoires. Le programme indique s’il n’a pas trouvé la valeur.

//Entrer la valeur recherchée : 12 
//La valeur 12 a été trouvée en 0 puis en 5, puis en 37.

//La recherche se fait à l’aide d’une variable nommée Curseur de type pointeur d’entier et qui doit :
// être correctement déclarée
// être initialisée avec l’adresse du premier élément du tableau
// parcourir toutes les positions du tableau afin de comparer l’élément pointé avec la valeur recherchéee


#define SIZETAB 100

int main()
{
    int max = 20;
    int min = 0;
    int tab[SIZETAB];
    int place[SIZETAB];
    int i = 0;
    int k = 0; 
    int valeur = 0; 
    int* Cursuer = &tab[0];

    for (i = 0; i < SIZETAB; i++) 
    {
        tab[i] = (rand() % (max - min + 1)) + min;
        place[i] = -1;

    }
    printf("Entrez la valeur recherchee : ");
    scanf_s("%d", &valeur);

    for (int i= 0; i < SIZETAB; i++) 
    {
        Cursuer = Cursuer + 1;
        if (*Cursuer == valeur)
        {
            if (k == 0)
            {
                printf("\nLa valeur a ete trouvee en %d", i);
            }
            else
            {
                printf(", et en %d", i);
            }
            k++;
            place[k] = i;

        }

    }
    if (k == 0)
    {
        printf("\nLa valeur n'a pas ete trouvee");
    }
    return 0;
}

