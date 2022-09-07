#include<stdio.h>

int main(){
  int a,b;
  
/*une variable est constituée de deux choses:
Une valeur : c'est le nombre qu'elle stocke, par exemple 5.
Un nom : c'est ce qui permet de la reconnaître */

  printf("Donner deux variables\n");
  scanf("%d %d",&a,&b);
  printf("incremente a et decremente b\n");
  a++;
  b--;
  printf("************\n");
  printf("%d\n",a);
  printf("%d\n",b);
  int x;
  x=a++;
  printf("%d\n",x);
  
  /* La structure des conditions (if-else):
    Structure:
    if(condition)                                      si condition est vrai (≠0)
    {                                                   on exécute
    bloc d'instructions 1;                             bloc d'instructions 1
    }
    else sinon
    {                                                    on exécute
    bloc d'instructions 2;                            bloc d'instructions 2 
    }
    */
  int max;
  if(a>b){
    max=a;
  } else  max=b;
  printf("Le max de a et b est :%d",max);
  
  /* Structure répétitive 
     Structure:
      while(condition)                 tant que condition est vraie (≠0)
      {                                on exécute
      bloc d'instructions ;            bloc d'instructions
      }
  */
  printf("***************************\n");
  int c=0;
  while(c<6){
    printf("%d\n",c);
    c++;
  }  
/* Do-while 
           Structure:
        do{                        on exécute
                                   bloc d'instructions ; bloc d'instructions
        }while(condition) ;        tant que condition est vrai (≠0)
  
  printf("\t\tdo------------whie\n");
    int m;
    do{
      printf("Veuillez saisir un nombre entre 1 et 20\n");  
      scanf("%d\n",&n);
    }while(n<10 || n>20);  
  
}
