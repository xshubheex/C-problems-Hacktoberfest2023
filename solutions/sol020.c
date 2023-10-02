#include<stdio.h>
#include<conio.h>

void main(){
int a,b,temp;
clrscr();
printf("Enter the first number: ");
scanf("%d",&a);      //accept 1st number from user

printf("Enter the second number: ");   
scanf("%d",&b);      //accept 2nd number from user

printf("\nbefore swap..\nA: %d and B: %d",a,b);    //print both numbers before swapping

temp=a;  //swapping process
a=b;
b=temp;

printf("\nAfter Swap..\nA: %d and B: %d",a,b);  //print both numbers after swapping

getch();
}