

//-- prototype --//
-- initialisation tableau ; 
void InitTable(short *ptTableau, int taille);
-- chercher valeur tableau ; 


void main()
{
short tbToto[10];
int taille = sizeof(tbToto);

InitTable(&tbToto[0], taille); // "InitTable(tbToto);"

}


//déclaratation fonction; 
void InitTable(short *ptTableau, int taille)
{
	int i = 0;
	// "int taille = sizeof(&ptTableau);"
	
	for (i = 0; i < taille;i++){
		ptTableau[i]= i+1; 
		
		/* 
			"*ptTableau = i+1;" <- attribution de la valeur à la case mémoire pointé
			"ptTableau++;"   	<- changement d'adresse (+1) (dans cet exemple, il s'agit d'un déplacement de 2 octets)
		*/
		
		
	}
};