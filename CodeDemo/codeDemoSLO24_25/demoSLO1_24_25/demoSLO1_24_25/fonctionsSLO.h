/*---------------------------------------------------------------------------------- -//
// Projet Name 			: demoSLO1_24_25
// File Name 			: fonctionsSLO.h
// Creation Date 		: 03.10.2024
// Modification Date	: 21.11.2024
//
// Author 				: Philou (Ph. Bovey)
//
// Version				: 0.1
//
// Description          : Declaration headerfile : 
//						  - prototypes 
//						  - constantes 
//						  - enumeration
//
// RemarK				:            
//----------------------------------------------------------------------------------*/

//librairie a inclure
#include <stdint.h>


#ifndef FUNCTIONS_SLO_H
#define FUNCTIONS_SLO_H

//-- constantes --// 
#define PI_2 3.14     // no memory space
#define TAILLE_TB 10
#define TAILLE_LG 2
#define TAILLE_CL 3

//-- enumeration --//
typedef enum { square, rectangle2 = 6, triangle2, circle } e_surfaceChoice;

//-- strcuture --// 
typedef struct
{
    short piston;
    double cylindre;
    float turbo;
}str_moteurV2;

// déclaration d'un champs de bit
typedef struct {

    uint32_t Donnees[506];

    uint32_t Adresse_IP_source;
    uint32_t Adresse_IP_destination;

    uint16_t Somme_de_controle_en_tete;
    uint16_t Longueur_totale;
    uint16_t Identification;

    uint8_t Type_de_service;
    uint8_t Duree_de_vie;
    uint8_t Protocole;

    struct seize_bit {
        uint16_t Decalage_fragment : 13;
        uint16_t Drapeau : 3;
    };

    union huit_bit
    {
        struct huit_bits {
            uint8_t Version : 4;                //LSB
            uint8_t Longueur_en_tete : 4;       //MSB
        };

        uint8_t transfert; 
    };

    

}Protocole_IP;

typedef struct {

    uint8_t Version : 4;
    uint8_t Longueur_en_tete : 4;
    uint8_t Type_de_service;
    uint16_t Longueur_totale;

    uint16_t Identification;
    uint8_t Drapeau : 3;
    uint16_t Decalage_fragment : 13;

    uint8_t Duree_de_vie;
    uint8_t Protocole;
    uint16_t Somme_de_controle_en_tete;

    uint32_t Adresse_IP_source;
    uint32_t Adresse_IP_destination;
    uint32_t Donnees[506];

}Protocole_IP_V2;

//declaration d'une union




//-- prototypes --//
/* -----------------------------------------------------------------------------------
* Function Name                     : slo
* Input - Ouput - I/O parameters    : void - int - N/A
* Description                       : demonstrating the declaration of types
                                      (integer, real, enumration) and the use of
                                      operators
----------------------------------------------------------------------------------- */
int slo(void); 

/* -----------------------------------------------------------------------------------
* Function Name                     : DemonstrationSlo1
* Input - Ouput - I/O parameters    : int, char, double - e_surfaceChoice - N/A
* Description                       : demonstrating the declaration of types
                                      (integer, real, enumration) and the use of
                                      operators
----------------------------------------------------------------------------------- */
e_surfaceChoice DemonstrationSlo1(int A, char B, double DD);


void fonctionDemopt(int A, int* pt_B); 

void FonctionSTR_UNION(); 





#endif // !FONCTIONS_SLO_H

