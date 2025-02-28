//-----------------------------------------------------------------------------------//
// Nom du projet 		: Exercice 4
// Nom du fichier 		: Ex4_V2_KGR
// Date de création 	: xx.xx.2016
// Date de modification : 26.11.2024
//
// Auteur 				: CHR (Christian Huber)
//                        Philou (Ph. Bovey)
//
// Version 				: 0.3
//
// Description          : Voir donnee exercice 4 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

//-- déclaration des librairies --// 
#include <stdio.h>	// pour usage printf


int main(void)
{
	// Déclaration cas A
	signed short A1 = 400;
	signed short A2 = 500;
	long ResA1 = 0;
	long ResA2 = 0;
	// Déclaration cas B
	unsigned short ValB = 0x1234;
	unsigned char HighValB = 0;
	unsigned char LowValB = 0;
	// Déclaration cas C
	unsigned short C1 = 0x5555;
	unsigned short C2 = 0x0F0F;
	unsigned short ResC = 0;
	// Déclaration cas D
	signed short D1 = 1325;
	signed short D2 = 7;
	signed short ResD1 = 0;
	signed short ResD2 = 0;
	// Traitement cas A
	printf ("Traitement cas A \n");
	ResA1 = A1 * A2;
	printf("ResA1 = A1 * A2 soit  %d * %d = %d \n", A1, A2, ResA1);
	ResA2 = A1 * A2;
	printf ("ResA2 = A1 * A2 soit  %d * %d = %d \n", A1, A2, ResA2);
	
	// Traitement cas B
	printf ("Traitement cas B \n");
	HighValB = (ValB & 0xFF00) >> 8;
	LowValB = ValB & 0x00FF;
	printf ("ValB  % HighValB = %2x LowValB = %2x\n", HighValB, LowValB);
	
	// Traitement cas C
	printf ("Traitement cas C \n");
	ResC = C1 | C2;
	printf ("ResC = %0x  OU %0x4 = %0x \n", C1, C2, ResC);
	ResC = C1 & C2;
	printf ("ResC = %0x  ET %0x4 = %0x0 \n", C1, C2, ResC);

	// Traitement cas D

	printf ("Traitement cas D \n");
	ResD1 = D1 / D2;
	ResD2 = D1 % D2;
	printf ("Division de %4d par %4d = %4d Reste = %4d \n", D1, D2, ResD1, ResD2);

  return(0);
}
