#include<stdio.h>

int main(){

    int i = 1;
    printf("\nPrinting using WHILE loop\n");

    while(i <= 50)
    {
        printf("%d\n",i);
        i++;
    }

    printf("\nPrinting using FOR loop\n");

    for( i = 1; i <= 50; i++)
    {
        printf("%d\n",i);
    }

    i = 1;
    printf("\nPrinting using DO-WHILE loop\n");

    do{
        printf("%d\n",i);
        i++;
    }while(i <= 50);

   
}