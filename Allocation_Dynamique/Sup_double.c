#include <stdio.h>
 
   scanf("%d", &nbr);
 
   printf(" Entrez les elements du tableau: ");
   for (i = 0; i < nbr; i++)
      scanf("%d", &tab[i]);
 
   // Supprimer les doublons
   printf(" Tableau sans doublons: ");
   for (i = 0; i < nbr; i++) {
      printf("%d ", tab[i]);
   }
                            
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

   return 0;
}