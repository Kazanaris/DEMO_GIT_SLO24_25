/*
*------------------------------------------------------------------------
* Nom du projet					: 
* Date de cr�ation du projet	: 
*------------------------------------------------------------------------
* Nom de-s l'auteur-s			: 
* Date de cr�ation du fichier	: 
*------------------------------------------------------------------------
* Nom du dernier �diteur		: 
* Version						: x.x
* Date de derni�re modification	: 
*------------------------------------------------------------------------
* But du fichiers				: 
* commentaire					: 
*------------------------------------------------------------------------
*/

/*-- librairie publique --*/
#include <stdio.h>
#include "Ex7_2_KGR.h"

/*-- librairie priv� --*/


/*-- d�claration variable --*/


/*-- d�claration fonction --*/


/*-- fontion princpale --*/
// fonction affichage �toiles
short AffTriangleAngleGH(char nbrE)
{
	//D�claration de variables locale
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

