//  SL121_LOGA canevas Ex12  C. HUBER 

#include <stdio.h>
#include "Ex12.h"
// Fonction ShowItems



int main (void)
{
	char UserAnswer;
	// Variables pour test A
	double TableA[NBR_CASE_TAB];
	double valItem = 10.00;
	short valCaseTab = 0;
	// Variables pour test B
	

	printf("Ex12  Kirian Gruber \n");  // A adapter

	// Boucle initialisation du tableau du testA
	for (char indice = 0; indice < 10; indice++)
	{
		TableA[indice] = valItem;
		valItem = valItem + 0.01;
	}

	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA: affichage des informations de TableA \n");
				// suite test A 
				
				valCaseTab = ShowItems(valCaseTab, &TableA[valCaseTab]);
				valCaseTab = ShowItems(valCaseTab, &TableA[valCaseTab]);
				
				
			break;

			case 'B':
			case 'b':
				printf("TestB: entrez le numero de ligne (max 15) \n");
				// suite test B 

			break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}


