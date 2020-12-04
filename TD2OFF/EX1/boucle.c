#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>



int main() {

	//somme des n premiers entiers positifs
	int n = 100;
	unsigned short int sum = 0;
	int i;
	//avec une boucle for
	for (i = 2; i <= n; i++) {
		sum = sum + i;
	}
	printf("Somme = %d \nN = %d", sum, n);
	printf("\n");
	system("pause");

	//avec une boucle while
	sum = 0;
	i = 2;
	while (i <= n)
	{
		sum = sum + i;
		i++;
	}
	printf("Somme = %d \nN = %d", sum, n);
	printf("\n");
	system("pause");

	//avec une boucle do while
	sum = 0;
	i = 2;
	do {
		sum = sum + i;
		i++;
	} while (i <= n);
	printf("Somme = %d \n n= %d\n", sum, n);
	printf("\n");
	system("pause");

	//on calcule la valeur max de n sans dépassement de capacité
	//unsined int short est codé sur 2 bytes soit 16 bits. Ainsi, la valeur max possible = 2^(16)-1= 65535
	//En decimal, on obtient donc valeur max de n=361
	//on utilise la boucle while créée précedemment

	n = 1;
	unsigned short int sum_max = 65535;
	sum = 0;
	printf("Enter valeur de n: \n");
	while (! (n== 0)) 
	{
		sum = sum + i;
		i++;
		if (sum_max - sum < n+1) //condition pour voir s'il y a eu depassement de capacité
		{
			printf("depassement capacité\n");
			break; //sortir de la boucle 
		}
		n = n + 1;
	}
	printf("La valeur max de n est : %d \nPour la somme : %d", n, sum);
	printf("\n");
	system("pause");

	//test numéro 3, demander à l'utilisateur de rentrer une valeur de n
	//on reprend la boucle for précédente
	printf("Rentrez une valeur pour n : ");
	scanf_s("%hu", &n);
	sum = 0;
	for (i = 2; i <= n; i++) {
		sum = sum + i;
	}
	printf("Somme = %d \n n = %d", sum, n);
	printf("\n");
	system("pause");

	//même exercice que le précédent mais en demandant à l'utilisateur de modifier son entrée si n est trop grand
	//on passe d'une boucle for à une boucle while
	n = 74873;
	while (n > 361) {
		printf("Rentrez une valeur pour n inferieur a 361: ");
		scanf_s("%hu", &n);
	}
	sum = 0;
	for (i = 2; i <= n; i++) {
		sum = sum + i;
	}
	printf("Somme = %d \n n = %d", sum, n);
	printf("\n");
	system("pause");

	return (EXIT_SUCCESS);
}