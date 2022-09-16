#include<stdio.h>

int main(){
	int tab1[10],tab2[10],tab3[10],i,j,n1,n2,n3;
	
	printf("Veuillez entrer la taille du 1er tableau:");
	scanf("%d",&n1);
	printf("***********Tableau 1*************\n");
	for(i=0;i<n1;i++){
		printf("tab1[%d]=",i);
		scanf("%d",&tab1[i]);
	}
	printf("Veuillez entrer la taille du 2eme tableau:");
	scanf("%d",&n2);
	printf("***********Tableau 2*************\n");
	for(i=0;i<n2;i++){
		printf("tab2[%d]=",i);
		scanf("%d",&tab2[i]);
	}
	printf("***********Affichage du tableau 1*************\n");
	for(i=0;i<n1;i++){
		printf("tab1[%d]=%d\n",i,tab1[i]);
	}
	
	printf("***********Affichage du tableau 2*************\n");
	for(i=0;i<n2;i++){
		printf("tab2[%d]=%d\n",i,tab2[i]);
	}
	
	for(i=0;i<n1;i++){
		tab3[i]=tab1[i];
	}
	
	n3=n1+n2;
	for(i=0,j=n1;j<n3 && i<n2;i++,j++){
		tab3[j]=tab2[i];
	}
	
	printf("Le tableau fusionner est:\n");
	for(i=0;i<n3;i++){
		printf("tab3[%d]=%d\n",i,tab3[i]);
	}
    
    return 0;
}








