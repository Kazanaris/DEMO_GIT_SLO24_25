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

/*-- librairie priv� --*/
#include "Ex12.h"

/*-- d�claration variable --*/


/*-- d�claration fonction --*/
/*--Fonction partie A--*/
double ShowItems(short X, double *Y)
{
	//char indice = X;
	double valItem = *Y;
	printf("TestA: indice = %d, adresse item = %X  valeur item = %f\n", X, &Y, valItem);
	*Y+= 1;
	return(valItem);
}



/*-- fonction princpale --*/


/*-- documentation --*/

