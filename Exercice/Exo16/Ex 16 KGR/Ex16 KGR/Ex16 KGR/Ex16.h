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

