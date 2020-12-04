#include <stdlib.h> 
#include <stdio.h>
#include <math.h>

#define carreFaux(x) x*x //Ne marche pas ! : sans les paranthèse, la priorité l'emporte sur l'addition n+1*n*1 = 2n+1 
#define carre(x) (x)*(x) //// Les parenthèses permettent le comportement cohérent de la macro	

int main()

{
	int Nb = 5;

	printf(" Nb au carre = %d", carre(Nb));
	printf("Nb au carre = %d", carre(Nb + 1));
	printf("Nb au carre = %d", carreFaux(Nb + 1));
	
	system("PAUSE");
	return EXIT_SUCCESS;

}
