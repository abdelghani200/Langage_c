#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int main(){
	int tab[10],i,n,x;
	int cpt=0;
	printf("Veuillez saisir la taille du tableau:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("tab[%d]=",i);
		scanf("%d",&tab[i]);
	}
	printf("***********Affichage**********\n");
	for(i=0;i<n;i++){
		printf("tab[%d]=%d",i,tab[i]);
		printf("\n");
	}
	printf("Donner la valeur a rechercher:");
	scanf("%d",&x);
//	printf("*****************\n");
	
	i = 0;
	
	do{
		if(tab[i]==x){
			cpt=1;
			i++;
		}
	}while(cpt==0 && i!=n);
	
	
     
	if(cpt==1)
		printf("La valeur %d existent dans Tab.",x);
	else
		printf("La valeur %d n'existent pas dans Tab.",x);
	
    return 0;
}




























