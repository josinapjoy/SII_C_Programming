/*
1.Ecrivez une fonction initialiser_personne() qui prend en entrée deux pointer de caracters,
  nom et address et qui initialise les tableaux de charcyeres avec les chaines "Jean Dupont"
  et "1 rue de la Paix, 75008 Paris". 

2.Ecrivez une fonction copier_personne() qui prend en entrée quatre pointer de caracters,
  dest_nom dest_address,src_nom et src_address qui utilise memcpy() pour copier les chaines 
  charcteres src_nom et src_address dans le tableaux des charcters dest_nom et dest_address.

3.Dans la fonction main(),declarez deux tableaux de caracteres nom et address puis appeler la fonction 
  initialiser_personne() pour initilaiser ces tableaux 

4.Declarez deux autres tableaux de caracteres nom2 et address2 et puis appeler le fonction copier_personne()
  pour copier les chaines de cracteres de nom et address à nom2 et address2

5.Affichez les tableaux nom et address et puis affichez le tableaux nom et address2
  pour verifier que les chaines de caracter ont bien ete copier.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NOM 60
#define ADDRESS 100

void copier_personne(char* src_nom, char* src_address, char* dest_nom, char* dest_address );
void initialiser_personne(char* nom, char* address);

char nom_initial[NOM] ="Jean Dupont";
char address_initial[ADDRESS] ="1 rue de la Paix, 75008 Paris";

int main()
{
	char nom[NOM];
	char address[ADDRESS];
	char nom2[NOM];
	char address2[ADDRESS];

	initialiser_personne(nom,address);

	printf("The name:%s ",nom);
	printf("The original address1:%s ", address);
	printf("The name 2:%s ", nom2);
	printf("The original address2:%s ", address2);
	//copier_personne();
	return 0;
}
void initialiser_personne(char* nom,char* address)
{
	memcpy(nom,nom_initial,NOM);
	memcpy(address, address_initial,ADDRESS);
	
}
void copier_personne(char* src_nom, char* src_address, char* dest_nom, char* dest_address)
{
	memcpy(dest_nom, src_nom, NOM);
	memcpy(dest_address, src_address, ADDRESS);
}

