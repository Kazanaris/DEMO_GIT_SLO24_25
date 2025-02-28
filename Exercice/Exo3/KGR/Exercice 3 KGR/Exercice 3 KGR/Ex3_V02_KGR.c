//-----------------------------------------------------------------------------------//
// Nom du projet 		: Ex3
// Nom du fichier 		: Ex3_V02_KGR
// Date de création 	: xx.xx.2016
// Date de modification : 14.09.2017
//
// Auteur 				: CHR (Christian Huber)
//                        Philou (Ph. Bovey)
//
// Description          : 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

#include <stdio.h>	// pour usage printf
#include <stdint.h> // uniformation du type entier 

// Déclaration globales des constantes
// -----------------------------------
const signed short VMAX = 10000;
const signed short VMIN = -10000;
const double PI = 3.14159;



int main(void)
{
	// Déclarations locales des variables
	// ----------------------------------
	// Sans affectation
	double Surface, Rayon;
	char Lettre;
	// Avec initialisation
	signed short Tension = VMAX;
	uint32_t BigVal = 0x12345678;
	// Déclaration de l'énumération
	typedef enum e_TypeFigure {cercle, ellipse, carre, rectangle, triangle};
	// Affectations
	// ------------
	Tension = Tension - 500;
	Lettre = 'B';
	enum e_TypeFigure Figure = carre;
	Rayon = 8.500;
	Surface = PI * (Rayon * Rayon);
	// Affichages pour controle
	printf ("Tension = %d \n", Tension);
 	printf ("BigVal = %lx \n", BigVal);
	printf ("Lettre  = %c \n", Lettre);
	printf ("Figure = %d \n", Figure);
	printf ("Rayon = %8.3f Surface = %8.3f \n", Rayon, Surface);

  return(0);
}
