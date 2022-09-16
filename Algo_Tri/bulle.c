#include <stdio.h>

int main(){
	int tab[10],i,n;
	
	printf("Veuillez saisir la taille du tableau:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("tab[%d]=",i+1);
	    scanf("%d",&tab[i]);
	}
	printf("*******Affichage avant le tri**********\n");
	for(i=0;i<n;i++){
		printf("tab[%d]=%d\n",i+1,tab[i]);
	}
	int cpt=0,temp;
	do{
		cpt=0;
		for(i=0;i<n-1;i++){
			if(tab[i]>tab[i+1]){
				temp=tab[i];
				tab[i]=tab[i+1];
				tab[i+1]=temp;
				cpt++;
			}
		}
	}while(cpt>0);
	
	printf("*******Affichage apres le tri**********\n");
	for(i=0;i<n;i++){
		printf("tab[%d]=%d\n",i+1,tab[i]);
	}
	
}