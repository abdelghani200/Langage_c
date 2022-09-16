#include<stdio.h>
#include<stdlib.h>



int main(){
	int tab[10],i,n,x;
	int milieu,debut,fin;
	int cpt=0;
	debut=0;
	printf("Veuillez saisir la taille du tableau:");
	scanf("%d",&n);
	fin=n-1;
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
	printf("*****************\n");
	
	
	while(debut<fin && cpt==0){
		milieu=(debut+fin)/2;
		if(tab[milieu]==x)
		cpt=1;
		else if(tab[milieu]>x)
		fin=milieu-1;
		else 
		debut=milieu+1;
	}

	if(cpt!=0)
		printf("La valeur %d existent dans Tab.",x);
	else
		printf("La valeur %d n'existent pas dans Tab.",x);
	
    return 0;
}












//void recherche_dechotomique(int tab[],int debut,int milieu,int fin,int x){
//	bool trouve=false;
//	int n;
//	debut=0;fin=n-1;
//	while(debut<=fin && trouve==false){
//		
//		milieu=(debut+fin)/2;
//		if(tab[milieu]==x)
//			trouve=true;
//		else if(tab[milieu]>x)
//			fin=milieu-1;
//		else debut=milieu+1;
//	}
//	if(trouve==true)
//		printf("%d se trouve dans le tableau",x);
//	
//	else
//		printf("%d ne se trouve pas dans le tableau",x);
//	
//}
















