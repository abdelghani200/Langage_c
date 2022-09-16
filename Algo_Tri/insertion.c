#include<stdio.h>

int main(){
	int tab[10],i,n,j;
	
	printf("Veuillez saisir la taille du tableau:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("tab[%d]=",i+1);
	    scanf("%d",&tab[i]);
	}
	printf("*******Affichage**********\n");
	for(i=0;i<n;i++){
		printf("tab[%d]=%d\n",i+1,tab[i]);
	}
	int temp;
	for(i=1;i<n;i++){
		j=i;
		while(j>0 && tab[j-1]>tab[j]){
			temp=tab[j];
			tab[j]=tab[j-1];
			tab[j-1]=temp;
			j--;
		}
	}
	
	printf("\n******** tableau triee par ordre croissant ********\n");
	for(i=0;i<n;i++){
		printf("tab[%d]=%d\n",i+1,tab[i]);
	}
}