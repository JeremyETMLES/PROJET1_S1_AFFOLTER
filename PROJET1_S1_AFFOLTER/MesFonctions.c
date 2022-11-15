//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet 1 - Info Variable 
// Nom du fichier 		: MesFonctions.c
// Date de cr�ation 	: 01.11.2022
// Date de modification : 15.11.2022
//
// Auteur 				: JAR (J�r�my Affolter)
//
// Description          : 
//
//
// Remarques			: voir donnee de l'�preuve            
//----------------------------------------------------------------------------------//


// Librairie perso
#include "MesFonctions.h"


//---
// Nom fonction : InfoVariable
// Param�tres entr�e / sortie / inout : valUtilisateur/-
// Description : Donne les informations sur un nombre entr� entre 10000 et -10000
// Remarque : -
// Auteur : JAR
// Date modification : 15.11.2022
//---
void InfoVariable(float valUtilisateur)
{
	// Variables locales
	int intvalUtilisateur = valUtilisateur;

	// Test si la valeur est plus petite que 0
	if (valUtilisateur < 0)
	{
		// Affichage "valeur n�gative"
		printf("La valeur entree est negative\n");
	}
	else
	{
		// Affichage "valeur positive"
		printf("La valeur entree est positive\n");
	}


	if (intvalUtilisateur - valUtilisateur != 0)
	{
		// Affichage "valeur r�elle"
		printf("La valeur entree est reelle\n");
		// Affichage "valeur ni paire, ni impaire"
		printf("La valeur entree n'est ni paire, ni impaire\n");
		// Affichage "type a utiliser: float"
		printf("Le type de variables a utiliser est: Float\n");
	}
	else
	{
		// Affichage "valeur enti�re"
		printf("La valeur entree est entiere\n");
		if (intvalUtilisateur % 2)
		{
			// Affichage "valeur impaire"
			printf("La valeur entree est impaire\n");
			//if (valUtilisateur < NEGCHAR)
			//{
			//	// Affichage "type a utiliser: short"
			//	printf("Le type de variables a utiliser est: Short\n");
			//}
			//else
			//{
			//	// Affichage "type a utiliser: char"
			//	printf("Le type de variables a utiliser est: Char\n");
			//}
		}
		else
		{
			// Affichage "valeur paire"
			printf("La valeur entree est paire\n");
			//if (valUtilisateur <= CHAR)
			//{
			//	// Affichage "type a utiliser: char"
			//	printf("Le type de variables a utiliser est: Char\n");
			//}
			//else
			//{
			//	// Affichage "type a utiliser: short"
			//	printf("Le type de variables a utiliser est: Short\n");
			//}
		}
		if (valUtilisateur <= CHAR || valUtilisateur >= NEGCHAR)
		{
			// Affichage "type a utiliser: char"
			printf("Le type de variables a utiliser est: Char\n");
		}
		else
		{
			// Affichage "type a utiliser: short"
			printf("Le type de variables a utiliser est: Short\n");
		}
	}
}