#include<stdio.h>
#include <stdlib.h>
#include"var.h"
#include <math.h>


void variance (int t[], int n, float *var)
{

	int Moy, sum;
	float v;
	int i,j;
	int somme=0;
	sum = 0;
	for (j=0; j<n; j++)
	{
		sum = sum + t[j]; // le calcul de la somme afin de pouvoir calculer la moyenne

	}
	Moy= sum / n; // calcul de la moyenne qu'on va utiliser pour la variance 

	for(i=1; i<(n+1);i++)
	{

        printf("%d\n",(t[i]-Moy)*(t[i]-Moy));
		somme= somme + (t[i]-Moy)*(t[i]-Moy);
	}

	v=somme/n;
	*var= v;
}



