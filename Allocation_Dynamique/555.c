#include <stdio.h>

void iser(int tab[], int x, int y, int n){
    printf("What number you want to replace \nNUM");
    scanf("%d", &x);
    printf("By what \n");
    scanf("%d", &y);
    tab[x - 1] = y;
    //Replacing Done!!
    printf("Now your list is : \n");
    for (int i = 0; i < n; i++){
            printf("NUM%d-> %d \n",i + 1,  tab[i]);
    }
}



int main(){
    int n;
    printf("How many numbers you want to add ??\n");
    scanf("%d", &n);
    int tab[n], x, y;
    for (int i = 0; i < n; i++){
            printf("Enter the %d number : \n", i + 1);
            scanf("%d", &tab[i]);
    }
    printf("Your list is : \n");
    for (int i = 0; i < n; i++){
            printf("NUM%d-> %d \n",i + 1,  tab[i]);
    }
    //Call the function
    iser(tab, x, y, n);
    return 0;
}