/*
*------------------------------------------------------------------------
* Projet name					: Execrice sélections et itérations
* Projet creation date			: 27.11.2024
*------------------------------------------------------------------------
* Auther's name-s				: Kirian Gruber
* Date de création du fichier	: 27.11.2024
*------------------------------------------------------------------------
* Last editer					: None
* Version						: 0.1
* Last mod date					: 27.11.2024
*------------------------------------------------------------------------
* purpose of this file			: 
* comments						: 
*------------------------------------------------------------------------
*/

/*-- public library --*/
#include <stdio.h>	// pour usage printf et scanf_s
                    // Nouveauté du VC++ 2005, 2008, 2010 et 2015 : le scanf_s remplace scanf
#include <stdint.h>
#include <stdlib.h>
#include "Ex5_KGR.h"
/*-- private library --*/


/*-- variable declaration --*/
char ValA;
int i;
char int8Val;
unsigned char uint8Val;
typedef enum Valeur {A = 'A', B = 'B', Q = 'Q',};
/*-- constant declaration --*/
const unsigned char VAL_A_MAX = 9;
const unsigned char VAL_A_MIN = 0;

/*-- main fontion --*/
int main(void)
{
    char Test = 0;
    printf("LOGA_C Ex5");
    printf("\nTest A ou B. Q pour Quitter\n");
    scanf_s("%c", &Test);
    do{
        switch (Test)                                  
        {
        case A:
            printf("\nTestA: entrez un nombre de 1 a 9\n");
            scanf_s("%d", &ValA);
           
            if (ValA > VAL_A_MAX)               // test de la condition ValA plus grand que 9
            {
                printf("\nValA limitee a 9 !");
                for (i = 0; i < 9; i++)
                {
                    printf("\ni = %d", i);        
                }
                printf("\nTest A ou B. Q pour Quitter\n");
            }

            if (ValA < VAL_A_MIN)
            {
                printf("\nTest A ou B. Q pour Quitter\n");

            }

            if ((ValA >= VAL_A_MIN) && (ValA <= VAL_A_MAX))
            {
                for (i = 0; i < ValA; i++)
                {
                    printf("\ni = %d", i);
                }
                printf("\nTest A ou B. Q pour Quitter\n");
            }

            break;

        case B:
            int8Val = 125;
            uint8Val = 125;
            printf("\nTestB: affichage val signee et non signee\n");
            for (i = 0; i < 10; i++)
            {
                printf("\nint8Val = %+3d  ", int8Val);
                printf("uint8Val = %d", uint8Val);
                int8Val = int8Val + 1;
                uint8Val = uint8Val + 1;
            }

            break;

        default:

            break;



        }
        scanf_s("%c", &Test);
    } while (Test != Q);
    

}

/*-- documentation --*/

