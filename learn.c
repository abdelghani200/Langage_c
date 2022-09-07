#include<stdio.h>

int main(){
  int a,b;
  
/*une variable est constituée de deux choses:
Une valeur : c'est le nombre qu'elle stocke, par exemple 5.
Un nom : c'est ce qui permet de la reconnaître */

  printf("Donner deux variables\n");
  scanf("%d %d",&a,&b);
  prinft("incremente a et decremente b\n");
  a++;
  b--;
  printf("************\n");
  printf("%d\n",a);
  printf("%d\n",b);
}
