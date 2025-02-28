// Canevas Ex11 SLO1 SL121_LOGA 

#include <stdio.h>
#include "Ex11.h"

// Fonction fDivInt


// Fonction Extract


int main (void)
{
	char UserAnswer;
	// Variables pour test A
	int ValA_dividende, ValA_diviseur;
	int quotient;
	int reste;
	// Variables pour test B
	int ValB;
	short int centaines;
	short int dizaines;
	short int unites;
	// Invite exercice 11
	printf("EX11 Kirian Gruber  \n");
	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA: entrez le dividende  \n");
				scanf_s("%d%*c", &ValA_dividende);
				printf("TestA: entrez le diviseur  \n");
				scanf_s("%d%*c", &ValA_diviseur);
				// suite TestA à introduire ICI

				quotient = fDivInt(ValA_dividende, ValA_diviseur, &reste);

				printf("Resultat de %d / %d = %d, reste = %d\n", ValA_dividende, ValA_diviseur, quotient, reste);

		break;

			case 'B':
			case 'b':
				printf("TestB: entrez un nombre de 0  a 999 \n");
				scanf_s("%d%*c", &ValB);
				// suite TestB à introduire ICI
				if (ValB > VAL_MAX)
				{
					printf("ValB est limitee a 999 !\n");
				}
				else
				{
					unites = Extract(ValB, &centaines, &dizaines);

					printf("ValB = %d  centaines = %d  dizaines = %d  unites = %d \n", ValB, centaines, dizaines, unites);
				}

		break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}