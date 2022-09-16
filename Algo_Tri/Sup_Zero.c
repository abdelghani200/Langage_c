#include<stdio.h>

int main(){

	int tab[10],t[10],i,j,n;
	printf("Veuillez saisir la taille du tableau:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("tab[%d]=",i+1);
		scanf("%d",&tab[i]);
	}
	printf("**********Affichage***********\n");
	for(i=0;i<n;i++){
		printf("tab[%d]=%d\n",i+1,tab[i]);
	}
	
	for(i=0,j=0;i<n;i++){
		t[j]=tab[i];
		if(tab[i]!=0)
			j++;
	}
	n=j;
	printf("**********Nouveau affichage***********\n");
	for(i=0;i<n;i++){
		printf("%d\n",t[i]);
	}
	
}
