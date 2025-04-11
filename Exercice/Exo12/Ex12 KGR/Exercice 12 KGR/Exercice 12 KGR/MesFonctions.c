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

/*-- librairie privé --*/
#include "Ex12.h"

/*-- déclaration variable --*/


/*-- déclaration fonction --*/
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

