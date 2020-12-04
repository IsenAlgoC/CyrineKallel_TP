#include <stdlib.h>

#include <stdio.h>
#include "tp4.h"

//Dans le main(), déclarer trois variables de type HEURE : HeureDebut, HeureFin, Duree. 
//HeureDebut vaut 12h30, Duree vaut 00 :45.
//Additionner ces deux valeurs pour déterminer la valeur de HeureFin.
//Et afficher les trois valeurs au format hh : mm


int main(int argc, void** argv[])
{
	HEURE HeureDebut;
	HEURE  HeureFin;
	HEURE Duree;

	HeureDebut.heure = 12;
	HeureDebut.minute = 30;
	Duree.heure = 0;
	Duree.minute = 45;

	HeureFin.heure = HeureDebut.heure + Duree.heure;
	HeureFin.minute = HeureDebut.minute + Duree.minute;

	if (HeureFin.minute >= 60)
	{
		HeureFin.minute = HeureFin.minute % 60;
		HeureFin.heure = HeureFin.heure + 1;
	}

	printf("\nHeureDebut= %d:%d\n", HeureDebut.heure, HeureDebut.minute);
	printf("\nDuree %d:%d\n", Duree.heure, Duree.minute);
	printf("\nHeureFin= %d:%d\n", HeureFin.heure, HeureFin.minute);

	return 0;
}

