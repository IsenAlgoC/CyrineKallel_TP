#include <stdio.h>
#include <stdlib.h>

void AffichageIPv4(int Valeur) {

}
int main()
{
	int MyAddress_w = 192;
	int MyAddress_x = 168;
	int MyAddress_y = 129;
	int MyAddress_z = 10;
	int IPv4MaskLength = 24;
	char ValeurEntree = 0;
	int Masque;
	printf("Veuillez entrer l'adresse IPv4 sur 32 bits: ");
	scanf_s("%d", &ValeurEntree);
	printf("Veuillez entrer le masque : ");
	scanf_s("%d", &Masque);
	int valeurMSB = (int)pow(2, 31);
	int temp = 0;

	
	for ( int i = 1; i <= 32;i++) // On calcul la valeure entière de MyAdress_w
	{ 
		if ((ValeurEntree & valeurMSB) == 1)
		{
			if (i % 8 != 0) {
				temp = temp + (int)pow(2, ((8) - (i% 8)));
			}
			else 
			{
				temp = temp + 1;
			}
			ValeurEntree <<= 1;
		}
		if (i == 8) {
			MyAddress_w = temp;
			temp = 0;
		}
		else if (i == 16) 
		{
			MyAddress_x = temp;
			temp = 0;
		}
		else if (i== 24) 
		{
			MyAddress_y = temp;
			temp = 0;
		}
		else if (i == 32)
		{
			MyAddress_z = temp;
			temp = 0;
		}

	}
	printf("\n adresse      IPv4 =%d.%d.%d.%d", MyAddress_w, MyAddress_x, MyAddress_y, MyAddress_z);
	printf("");

}