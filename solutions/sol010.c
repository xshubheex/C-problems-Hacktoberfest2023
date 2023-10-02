// Program to print all alphabets from a to z using all three loops

#include<stdio.h>
int main(){
    // Using While loop : 
    char letter = 'a';
        printf("Using While loop :\n");
    while (letter <='z')
    {
        printf("%c ",letter);
        letter++;
    }
    printf("\n");

    // Using Do While loop : 
    letter = 'a'; // resetting the value of letter to a
    printf("\nUsing Do While loop : \n");
    do
    {
        printf("%c ",letter);
        letter++;
    } while (letter <= 'z');
    printf("\n");

    // Using For loop : 
    printf("\nUsing For loop : \n");
    for (letter = 'a';letter <= 'z';letter++)
    {
        printf("%c ",letter);
    }
    return 0;
}