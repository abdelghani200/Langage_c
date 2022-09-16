#include<stdio.h>

typedef struct{
	int a,m,j;
}Date; 

typedef struct{
	char nom[20];
	char prenom[25];
	Date dat;
}Etudiant;


static int nb;

void Ajouter_Etudiant(Etudiant *E){
	
	printf("\t\t\tDonner votre informations:\n");
	printf("Saisir votre nom complet:");
	scanf("%s %s",E->nom,E->prenom);
	
	
	printf("Saisir votre date de naissance sous forme --jj.mm.aa--:");
	scanf("%d.%d.%d",&E->dat.j,&E->dat.m,&E->dat.a);
	
}

void Ajouter_Etudiants(Etudiant E[]){
	int i;
	printf("Veuillez saisir le nombre des etudiants:");
	scanf("%d",&nb);
	for(i=0;i<nb;i++){
		Ajouter_Etudiant(&E[i]);
	}
	
}

void afficher_Etudiants(Etudiant E[]){
	int i;
	printf("\t\t\tAfficher Les etudiants:\n");
	
	for(i=0;i<nb;i++){
		printf("\t\tVotre informations personnel:\n");
		printf("Nom:-----------Prenom:\n");
		printf("%s-----------%s--------%s:\n",E[i].nom,E[i].prenom);
		printf("\t\tVotre Date de Naissnace:");
		printf("%d.%d.%d:",E[i].dat.j,E[i].dat.m,E[i].dat.a);
	}
}

//printf("%s-----------%s\n",p[i].nom,p[i].tele);





int main(){
	
	Etudiant E[4];
	Date d;
	
	int choix;
	
	//Ajouter_Etudiants(E);
	
	do
	{
		
		do
		{
			printf("\t\t\tBonjour Dans Notre Plateforme:\n");
			printf("1-Ajouter des nouveaux etudaints:\n");
			printf("2-Afficher des etudiants:\n");
			printf("3-Quitter le programe:\n");
			printf("Choisir un choix:");
			scanf("%d",&choix);
			
     	}while(choix<1 || choix>3);
		
		switch(choix)
		{
			case 1 : Ajouter_Etudiants(E);break;
			case 2 : afficher_Etudiants(E);break;
			default : break;
		}
		
	}while(choix!=3);
	
	return 0;
}
