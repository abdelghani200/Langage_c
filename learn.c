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
  
  
}
