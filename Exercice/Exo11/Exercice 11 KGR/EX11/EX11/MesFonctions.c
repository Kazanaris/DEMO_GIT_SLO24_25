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


/*-- librairie privé --*/
#include "Ex11.h"

/*-- déclaration variable --*/


/*-- déclaration fonction --*/
/*Fonction division*/
int fDivInt(int X, int Y, int* Z)
{
	/*Déclaration variables locales*/
	int quotient;

	/*Code de la fonction*/
	quotient = X / Y;
	*Z = X % Y;

	return(quotient);
}

/*Fonction Extract*/
short int Extract(int X, short int *Y, short int *Z)
{
	/*Constantes globales de la fonction*/
	const short int VAL_CENTAINES = 100;
	const short int VAL_DIZAINES = 10;
	/*Déclarations des variables locales*/
	short int centaines;
	short int dizaines;
	short int unites;

	/*Code de la fonction*/
	centaines = X / VAL_CENTAINES;
	dizaines = (X - (VAL_CENTAINES * centaines)) / VAL_DIZAINES;
	unites = (X - (VAL_CENTAINES * centaines) - (VAL_DIZAINES * dizaines));

	*Y = centaines;
	*Z = dizaines;

	return(unites);
}


/*-- fontion princpale --*/


/*-- documentation --*/

