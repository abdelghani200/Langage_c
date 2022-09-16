#include<stdio.h>
#include<stdlib.h>
int main(){
   int n,i;
   float S=0,M;
   printf("Veuillez saisir la taille du tableau: ");
   scanf("%d",&n);
   float *t=calloc(n,sizeof(int));
   if(t==NULL){
    printf("La memoire n'est pas alloue!!!");
    exit(0);
   }
   else{
       for(i=0;i<n;i++){
        printf("Donner T[%d]=",i+1);
        scanf("%f",(t+i));
       }
       for(i=0;i<n;i++){
        printf("T[%d]=%.f\n",i,*(t+i));
       }
       
       for(i=0;i<n;i++){
       	    S=S+*(t+i);
	   }    
   }
   M=S/n;
   
   printf("La somme est:%.f\n",S);
   printf("La moyen est:%.f",M);
   free(t);


}








