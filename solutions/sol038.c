#include <stdio.h>
int main() {   
    int number;
     scanf("%d", &number);
     double sum=0;

     for(int i=1;i<=number;i++)
     sum+=1/i;

     printf("%lf",sum);
    return 0;
}