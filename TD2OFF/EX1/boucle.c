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

	//on calcule la valeur max de n sans d�passement de capacit�
	//unsined int short est cod� sur 2 bytes soit 16 bits. Ainsi, la valeur max possible = 2^(16)-1= 65535
	//En decimal, on obtient donc valeur max de n=361
	//on utilise la boucle while cr��e pr�cedemment

	n = 1;
	unsigned short int sum_max = 65535;
	sum = 0;
	printf("Enter valeur de n: \n");
	while (! (n== 0)) 
	{
		sum = sum + i;
		i++;
		if (sum_max - sum < n+1) //condition pour voir s'il y a eu depassement de capacit�
		{
			printf("depassement capacit�\n");
			break; //sortir de la boucle 
		}
		n = n + 1;
	}
	printf("La valeur max de n est : %d \nPour la somme : %d", n, sum);
	printf("\n");
	system("pause");

	//test num�ro 3, demander � l'utilisateur de rentrer une valeur de n
	//on reprend la boucle for pr�c�dente
	printf("Rentrez une valeur pour n : ");
	scanf_s("%hu", &n);
	sum = 0;
	for (i = 2; i <= n; i++) {
		sum = sum + i;
	}
	printf("Somme = %d \n n = %d", sum, n);
	printf("\n");
	system("pause");

	//m�me exercice que le pr�c�dent mais en demandant � l'utilisateur de modifier son entr�e si n est trop grand
	//on passe d'une boucle for � une boucle while
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