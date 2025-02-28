/*
*------------------------------------------------------------------------
* Nom du projet					: Kirian Gruber
* Date de création du projet	: 27.11.2024
*------------------------------------------------------------------------
* Nom de-s l'auteur-s			: 
* Date de création du fichier	: 05.12.2024
*------------------------------------------------------------------------
* Nom du dernier éditeur		: Kirian Gruber
* Version						: x.1
* Date de dernière modification	: 06.12.2024
*------------------------------------------------------------------------
* But du fichiers				: 
* commentaire					: 
*------------------------------------------------------------------------
*/

/*-- librairie publique --*/
#include <stdio.h>
#include <stdlib.h>
#include "Ex5_KGR.h"
/*-- librairie privé --*/


/*-- déclaration variable --*/


/*-- déclaration fonction --*/


/*-- fontion princpale --*/
void vider_buffer(void)
{
	int c;

	do {
		c = getchar();
	} while (c != '\n' && c != EOF);
}

/*-- documentation --*/

