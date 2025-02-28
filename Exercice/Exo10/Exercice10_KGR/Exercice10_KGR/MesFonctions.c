/*
*------------------------------------------------------------------------
* Nom du projet					: Exercice 10 Fonctions et pointeurs
* Date de cr�ation du projet	: 31.01.2025
*------------------------------------------------------------------------
* Nom de-s l'auteur-s			: Kirian Gruber
* Date de cr�ation du fichier	: 31.01.2025
*------------------------------------------------------------------------
* Nom du dernier �diteur		: Kirian Gruber
* Version						: x.1
* Date de derni�re modification	: 07.02.2025
*------------------------------------------------------------------------
* But du fichiers				: 
* commentaire					: 
*------------------------------------------------------------------------
*/

/*-- librairie publique --*/


/*-- librairie priv� --*/
#include <stdio.h>
#include <math.h>	
#include "Exercice10_KGR.h"


/*-- d�claration variable --*/


/*-- d�claration fonction --*/
/*Fonction Test A*/
double FtestA(double X, double *Y)
{
	/*-- d�claration variables locales --*/
	double entier;
	double fract;
	
	/*Code de la fonction*/
	if (X > 0) 
	{
		entier = floor(X);
		fract = (X - entier);
		*Y = fract;
	}
	else
	{
		entier = ceil(X);
		fract = (X - entier);
		*Y = fract;
	}
		return(entier);
}
/*Fonction Test B*/
unsigned short int Extract(unsigned long X, unsigned short int *Y, unsigned short int *Z)
{
	/*D�finition de constantes locales*/
	const unsigned short int NB_SEC_PAR_H = 3600;
	const unsigned short int NB_SEC_PAR_MIN = 60;

	/*-- d�claration variables locales --*/

	unsigned short int heures;
	unsigned short int minutes;
	unsigned short int secondes;

	/*Code de la fonction*/
	heures = (X / NB_SEC_PAR_H);
	minutes = (X - (NB_SEC_PAR_H * heures)) / NB_SEC_PAR_MIN;
	secondes = ((X - (NB_SEC_PAR_H * heures)) - (NB_SEC_PAR_MIN * minutes));
	*Y = heures;
	*Z = minutes;

	return(secondes);
}



/*-- fonction princpale --*/


/*-- documentation --*/

