#include <stdlib.h> 
#include <stdio.h>
#include <math.h>
//Un premier exercice simple va consister à regarder ce que valent les 32 bits 
//d'un entier non signé ayant la valeur 2868838400 en base 10, soit AAFF0000 en hexadécimal. 

//afficher ON quand le bit vaut 1 et OFF quand il vaut 0.
int main()
{
	int unsigned long number = 2868838400;
	int i = 0;
	//POUR Afficher le nombre d'octets utilisés pour représenter le nombre entier
	printf("\nle nombre d'octets utilises pour representer le nombre entier est %d", sizeof(number));
	//POUR Afficher le nombre de bits utilisés pour représenter le nombre entier
	printf("\nle nombre de bits utilises pour representer le nombre entier est %d", 8 * sizeof(number)); //octect = 8 bits donc multiplier par 8

	//ON bit = 1, OFF bit = 0
	
	for (i = 0; i < 8 * sizeof(number); i++)
	{
		if ((number & 1) ==1)
		{
			printf("\nBit numero %d : ON", i);
			
		}
		else 
		{
			printf("\nBit numero %d : OFF", i);
			
		}
		number = number >> 1;
	}

	printf("\n\nBye");
}