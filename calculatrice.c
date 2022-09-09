#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
   float A,B;
   int c;
   char reponse;
   
   	do{
   		
   	printf("\t\t Calculatrice\n ");
   	printf("1-additon \n");
   	printf("2-substraction\n");
   	printf("3-multiplication \n");
   	printf("4_division \n");
   	printf("5-puissance\n");
   	printf("Quelle calcule veut-tu effectuer?\n");
   	scanf("%d",&c);
   	printf("Enter un nombre:\n");
   	scanf("%f",&A);
   	printf("Enter un autre nombre:\n");
   	scanf("%f",&B);
   	switch(c){
   		case 1 :printf("Le resultat est :%f\n",A+B);
		        break;
   		case 2 :printf("Le resultat est :%f\n",A-B);
		        break;
   		case 3 :printf("Le resultat est :%f\n",A*B);
		        break;
   		case 4 :if(B!=0){
   			printf("Le resultat est :%f\n",A/B);
		   }
		   else if(B==0){
		   	printf("incorrect...\n");
		   };
		   break;
		case 5 :printf("Le resultat est : %f\n",pow(A,B));break;
		   
	default : printf("erreur\n"); break;  
    }
	   printf("Veux-tu faire une autre calcul (O/N)?\n");
	   getchar();
	   scanf("%c",&reponse);
   }while(reponse !='N');
}

