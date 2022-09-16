#include<stdio.h>

void fusion(int tab[],int debut,int milieu,int fin){
	
	int n1=milieu-debut+1;
	int n2=fin-milieu;
	int tab1[n1],tab2[n2];
	int i,j,k;
	for(i=0;i<n1;i++){
		tab1[i]=tab[debut+i];
	}
	for(j=0;j<n2;j++){
		tab2[j]=tab[milieu+1+j];
	}
	i=0;j=0;k=debut;
	while(i<n1 && j<n2){
		if(tab1[i]<=tab2[j]){
			tab[k]=tab1[i];
			i++;
		}
		else{
			tab[k]=tab2[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		tab[k]=tab1[i];
		i++;
		k++;
	}
	while(j<n2){
		tab[k]=tab2[j];
		j++;
		k++;
	}
}


void tri_fusion(int T[],int D,int F){
    int m;	
	if(D<F){
	m=(D+F)/2;	
	tri_fusion(T,D,m);
	tri_fusion(T,m+1,F);
	fusion(T,D,m,F);
	}
}

void affichage(int tab[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d",tab[i]);
		printf("\n");
	}
}
     
     
int main(){
        
    int tab1[10],i,n1;    
	printf("Veuillez entrer la taille du 1er tableau:");
	scanf("%d",&n1);
	printf("***********Tableau 1*************\n");
	for(i=0;i<n1;i++){
		printf("tab1[%d]=",i);
		scanf("%d",&tab1[i]);
	}
	printf("***********Affichage du tableau 1*************\n");
	for(i=0;i<n1;i++){
		printf("tab1[%d]=%d\n",i,tab1[i]);
	}
     
        tri_fusion(tab1, 0, n1 - 1);
     
        printf("Tableau trie: \n");
        affichage(tab1, n1);
}
















