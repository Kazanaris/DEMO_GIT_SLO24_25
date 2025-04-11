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

/*-- definition --*/
#ifndef EX_16_H
#define EX_16_H

typedef union
{
	unsigned short jour : 5;
	unsigned short mois : 4;
	unsigned short annee : 7;
}JMA;


/*-- prototypes --*/
unsigned short ZipDate(unsigned short X, unsigned short Y, unsigned short Z);

/*-- constantes globale --*/


#endif 

/*-- documentation --*/

