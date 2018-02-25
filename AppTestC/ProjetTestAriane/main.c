#include <stdio.h>
#include <stdlib.h>

double calcul(int nombreTraite)
{
	double resultat =(double)nombreTraite/4;
	resultat = resultat + 2;
	return resultat;
}
void main(void)
{
	/* 
	printf("Rentrez un nombre :\n");
	int nombreUtilisateur;
	scanf_s("%d",&nombreUtilisateur);
	double resultat = calcul(nombreUtilisateur);
	printf("resultat du calcul:%f\n", resultat);
	int	a = 12;
	int b = a - 20;
	int min = b = 3;
	int c = 5;
	int reste = c % 2;
	printf("a : %d, b : %d, min : %d, c : %d et reste : %d\n", a, b, min, c, reste);*/

	/* printf("Nombre en secondes:\n");
	int tpsSec;
	scanf_s("%d", &tpsSec);
	int heures = tpsSec / 3600;
	int heuresEnSecondes = heures * 3600;
	int tempsRestant1 = tpsSec - heuresEnSecondes;
	int minutes = tempsRestant1 / 60;
	int secondes = tempsRestant1 % 60;
	printf("Le temps est de %d heures, %d minutes et %d secondes.\n", heures, minutes, secondes);*/
	
	/*int DateUk = 19970120;
	int années = DateUk / 10000;
	int jours = DateUk % 100;
	int mois = (DateUk % 10000)/100;
	//ou: int mois = (DateUk / 100)% 100;
	printf("DateEU : %d-%02d-%d.", jours, mois, années);*/

	/*int x = 3;
	int y = 4;
	int z = 5;
	int a = x;
	x = z;
	z = y;
	y = a;
	printf("x = %d, y = %d, z = %d\n", x, y, z);*/
	
	system("pause");
}