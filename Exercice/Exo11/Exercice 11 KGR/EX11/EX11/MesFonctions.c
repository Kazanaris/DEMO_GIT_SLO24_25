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


/*-- librairie priv� --*/
#include "Ex11.h"

/*-- d�claration variable --*/


/*-- d�claration fonction --*/
/*Fonction division*/
int fDivInt(int X, int Y, int* Z)
{
	/*D�claration variables locales*/
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
	/*D�clarations des variables locales*/
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

