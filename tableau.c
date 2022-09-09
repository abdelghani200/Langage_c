#include<stdio.h>
#include<string.h>
typedef struct{
	char nom[20];
	char tele[20];
}personne;

personne personnes[10];
static int nb;
void saisir_personne(personne *pp, int index){
	
	printf("Donner nom de personne N %d:",index);
	scanf("%s",pp->nom);
	printf("Donner votre tele:");
	scanf("%s",pp->tele);
}

void saisir_rep(personne p[]){
	
	int i;
	printf("Veuillez saisir le nombre des personnes:");
	scanf("%d",&nb);
	for(i=0;i<nb;i++){
		saisir_personne(&p[i], i+1);
	}
}

void afficher_personne(personne p[]){
	int i;
	printf("Afficher Les personne:\n");
	printf("%s ...... Numero\n", "Nom");
	for(i=0;i<nb;i++){
		printf("%s-----------%s\n",p[i].nom,p[i].tele);
	}
}

char* recherche_personne(personne per[],char *nom){
	int i;
	for(i=0;i<nb;i++){
		if(strcmp(nom,per[i].nom)==0){
			return per[i].tele;
		}
	}
	return NULL;
}


int main(){
	
	personne p[5];
	char nom[20],*temp;
	int nb,choix;
	saisir_rep(p);
	do{
		do{
			printf("\t\t\t\tMenu:\n");
			printf("1-afficher les repertoires:\n");
		    printf("2-chercher le numero d une personne\n");
			printf("3-Quitter le programe:\n");
			printf("choisir un choix:\n");
			scanf("%d",&choix);
		}while(choix<1 || choix>3);
		
		switch(choix){
			
			case 1 : afficher_personne(p);break;
			case 2 : printf("Saisir le personne a rechercher:\n");
			         scanf("%s",nom);
			         temp=recherche_personne(p,nom);
			         if(temp == NULL){
			         	printf("Aucune Personne");
					 }
					 else 	printf("--> Numero de %s: %s\n", nom, temp);break;
			default : break;		 
			
		}
		
	}while (choix !=3);
	return 0;
}
	
	




















