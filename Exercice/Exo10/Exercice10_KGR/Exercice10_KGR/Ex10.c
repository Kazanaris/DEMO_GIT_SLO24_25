// Canevas Ex10  C. HUBER 

#include <stdio.h>
#include <math.h>	// pour ceil et floor
#include "Exercice10_KGR.h"

// Fonction FtestA


// Fonction Extract



int main (void)
{
	char UserAnswer;
	// Variables pour test A
	double ValA;
	double PartInt = 0;
	double PartFract;
	// Variables pour test B
	unsigned long ValB;
	unsigned short int Heures;
	unsigned short int Minutes;
	unsigned short int Secondes;


	printf("Ex10 Kiran Gruber \n");
	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA: entrez un nombre fractionnaire  \n");
				scanf_s("%lf%*c", &ValA);
				// suite TestA à introduire ICI				
				PartInt = FtestA(ValA, &PartFract);
			
				printf("ValA = %f  PartInt = %f  PartFract = %f \n", ValA, PartInt, PartFract);


			break;

			case 'B':
			case 'b':
				printf("TestB: entrez un nombre de secondes \n");
				scanf_s("%d%*c", &ValB);
				// suite TestB à introduire ICI
				Secondes = Extract(ValB, &Heures, &Minutes);

				printf("ValB = %d  NbHeures = %d  NbMinutes = %d  NbSecondes = %d \n", ValB, Heures, Minutes, Secondes);

				break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}