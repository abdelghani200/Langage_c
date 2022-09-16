#include <stdio.h>
 
int main() {
   int nbr, i, j, k;
   int tab[30];
 
   printf(" Entrez le nombre d'elements dans le tableau: ");
   scanf("%d", &nbr);
 
   printf(" Entrez les elements du tableau: ");
   for (i = 0; i < nbr; i++)
      scanf("%d", &tab[i]);
 
   // Supprimer les doublons
   for(i=0;i<nbr;i++){
   	for(j=i+1;j<nbr;){
   		if(tab[j]==tab[i]){
   			for(k=j;k<nbr;k++){
   				tab[k]=tab[k+1];
			   }
			   nbr--;
		   }else
		    j++;
	   }
   }

   printf(" Tableau sans doublons: ");
   for (i = 0; i < nbr; i++) {
      printf("%d ", tab[i]);
   }
 
   return 0;
}