/*
*------------------------------------------------------------------------
* Projet name					: Exercice 7 : Fonctions
* Projet creation date			: 05.12.2024
*------------------------------------------------------------------------
* Auther's name-s				: Kirian Gruber
* Date de création du fichier	: 05.12.2024
*------------------------------------------------------------------------
* Last editer					: 
* Version						: x.x
* Last mod date					: 
*------------------------------------------------------------------------
* purpose of this file			: 
* comments						: 
*------------------------------------------------------------------------
*/

/*-- public library --*/
#include <stdio.h>
#include <stdlib.h>
#include "Ex7_2_KGR.h"

/*-- private library --*/


/*-- variable declaration --*/


/*-- Prototype function declaration --*/
//short AffTriangleAngleGH(char nbrE);

/*-- main fontion --*/
void main(void)
{
	// Déclarations variables locales
	char nbrEtoile = 0;
	short nbrEtoileAffichee = 0;
	printf("Exercice affichage Etoile");

	printf("\nSelectioner les nombres d'etoile voulu :");
	scanf("%d", (int*) &nbrEtoile);

	
	nbrEtoileAffichee = AffTriangleAngleGH(nbrEtoile);
	printf("valeur nbr etoiles affichees : %d", nbrEtoileAffichee);
}



/*-- documentation --*/

