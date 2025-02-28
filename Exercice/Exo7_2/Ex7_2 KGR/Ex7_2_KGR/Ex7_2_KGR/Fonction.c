/*
*------------------------------------------------------------------------
* Nom du projet					: 
* Date de création du projet	: 
*------------------------------------------------------------------------
* Nom de-s l'auteur-s			: 
* Date de création du fichier	: 
*------------------------------------------------------------------------
* Nom du dernier éditeur		: 
* Version						: x.x
* Date de dernière modification	: 
*------------------------------------------------------------------------
* But du fichiers				: 
* commentaire					: 
*------------------------------------------------------------------------
*/

/*-- librairie publique --*/
#include <stdio.h>
#include "Ex7_2_KGR.h"

/*-- librairie privé --*/


/*-- déclaration variable --*/


/*-- déclaration fonction --*/


/*-- fontion princpale --*/
// fonction affichage étoiles
short AffTriangleAngleGH(char nbrE)
{
	//Déclaration de variables locale
	char ligne, colonne, nbETot = 0;
	while(getchar())
	for (colonne = nbrE; colonne > 0; colonne--)
	{
		for (ligne = 0; ligne < colonne; ligne++)
		{
			printf("*");
		}
		printf("\n");
		nbETot = nbETot + colonne;
	}




	return nbETot;
}


/*-- documentation --*/

