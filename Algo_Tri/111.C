#include<stdio.h>

void fusion(int T[],int debut,int milieu,int fin){
	
	int n1=milieu-debut+1;
	int n2=fin-milieu;
	int D[n1],G[n2];
	int i,j,k;
	
	for(i=0;i<n1;i++){
		D[i]=T[debut+i];
	}
	for(j=0;j<n2;j++){
		G[j]=T[milieu+1+j];
	}
	
	i=j=0;k=debut;
	while(i<n1 && j<n2){
		if(D[i]<G[j]){
			T[k]=D[i];
			i++;
		}
		else{
			T[k]=G[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		T[k]=D[i];
		i++;
		k++;
	}
	while(j<n2){
		T[k]=G[j];
		j++;
		k++;
	}
}

void tri_fusion(int T[],int debut,int fin){
	int m;
	if(debut<fin){
		m=(debut+fin)/2;
		tri_fusion(T,debut,m);
		tri_fusion(T,m+1,fin);
		fusion(T,debut,m,fin);
	}
}

void affichage(int Tab[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("Tab[%d]=%d\n",i,Tab[i]);
	}
}

int main(){
	int tab1[10],n1,i;
	
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
	
	tri_fusion(tab1,0,n1-1);
	printf("µ****************µ\n");
	affichage(tab1,n1);
}

















