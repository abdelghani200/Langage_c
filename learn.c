#include<stdio.>

int main(){
  int a,b;
  
/*une variable est constituée de deux choses:
Une valeur : c'est le nombre qu'elle stocke, par exemple 5.
Un nom : c'est ce qui permet de la reconnaître */

  printf("Donner deux variables\n");
  scanf("%d %d",&a,&b);
  prinft("incremente a et decremente b\n");
  scanf("%d \t %d",a++,b--);
}
