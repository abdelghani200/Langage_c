#include<stdio.h>
#include<stdlib.h>
#include<math.h>

static int i;

int main(){
   float A,B,y;
   int c;
   char reponse;
   
   	do{
   		
	   	printf("\t\t Calculatrice\n");
	   	printf("1-additon\n");
	   	printf("2-substraction\n");
	   	printf("3-multiplication \n");
	   	printf("4_division \n");
	   	printf("5-puissance\n");
	   	printf("6-racine\n");
	   	printf("7-cousinus\n");
	   	printf("8-sinis\n");
	   	printf("9-tangante\n");
	   	printf("Quelle calcule veut-tu effectuer?\n");
	   	scanf("%d",&c);
   	switch(c){
   		case 1 :printf("Enter un nombre:\n");
			   	scanf("%f",&A);
			   	printf("Enter un autre nombre:\n");
			   	scanf("%f",&B);
		        printf("Le resultat est :%f\n",A+B);
		        break;
   		case 2 :printf("Enter un nombre:\n");
			   	scanf("%f",&A);
			   	printf("Enter un autre nombre:\n");
			   	scanf("%f",&B);
		        printf("Le resultat est :%f\n",A-B);
		        break;
   		case 3 :
				printf("Enter un nombre:\n");
			   	scanf("%f",&A);
			   	printf("Enter un autre nombre:\n");
			   	scanf("%f",&B);
			    printf("Le resultat est :%f\n",A*B);
		        break;
   		case 4 :printf("Enter un nombre:\n");
			   	scanf("%f",&A);
			   	printf("Enter un autre nombre:\n");
			   	scanf("%f",&B);
			    if(B!=0){
	   			printf("Le resultat est :%f\n",A/B);
			   }
			   else if(B==0){
			   	printf("incorrect...\n");
			   };
			   break;
		case 5 :printf("Enter un nombre:\n");
			   	scanf("%f",&A);
			   	printf("Enter un autre nombre:\n");
			   	scanf("%f",&B);
				
				printf("Le resultat est : %f\n",pow(A,B));break;
		case 6 :printf("Donner un nombre:\n");
			    scanf("%f",&i);
			    printf("rasine(%f)=%f\n",i,sqrt(i));;break;
		
		
		case 7 :printf("Donner un nombre:\n");
			    scanf("%f",&i);
			    printf("Cosinus(%f)=%f\n",i,cos(i));break;
		
		
		case 8 :printf("Donner un nombre:\n");
			    scanf("%f",&i);
			    printf("sinus(%f)=%f\n",i,sin(i));;break;
		
		
		case 9 :printf("Donner un nombre:\n");
			    scanf("%f",&i);
			    printf("tan(%f)=%f\n",i,tan(i));;break;
		   
	default : printf("erreur\n"); break;  
    }
	   printf("Veux-tu faire une autre calcul (O/N)?\n");
	   getchar();
	   scanf("%c",&reponse);
   }while(reponse !='N');
}

