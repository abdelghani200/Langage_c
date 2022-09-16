#include<stdio.h>

int main(){
	int tab[10],i,n;
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
	printf("*********************\n");
	int j,temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			temp=tab[i];
			tab[i]=tab[j];
			tab[j]=temp;
		}
	}
	
	
	printf("*******Inverse du tableau********\n");
	for(i=0;i<n;i++){
		printf("tab[%d]=%d\n",i+1,tab[i]);
	}
}