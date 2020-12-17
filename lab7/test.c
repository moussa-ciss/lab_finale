


#include<stdio.h>
#include <stdlib.h>
#include"var.h"
#include"max.h"
#include"min.h"


int main ()
{
	int nb_val;
	float  var;
	int max;
	int min;

	int tab[10]={4,9,10,11,12,15,12,9,0,30};

	printf("Nombre d\'elements ? "); 
	scanf ("%d", &nb_val);

		
	chercher_max(tab, nb_val, &max); // on fait appel à la fonction max pour nous afficher le max du tab[10]
	printf ("Max = %d\n", max);

	chercher_min(tab, nb_val, &min); //on fait appel à la fonction min pour nous afficher le min du tab[10]
	printf ("Min = %d\n", min);

	variance(tab, nb_val, &var); // on fait appel à la fonction var pour nous calculer la variance du tab[10]
	printf ("Var = %f\n", var);
	
	return 0;
}
