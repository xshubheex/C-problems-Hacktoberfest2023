#include<stdio.h>

int main(){
//declaration and intialization
int sum=0,count=0,i;
for(i=100;i<200;i++){
if(i%7==0){
sum+=i;

count++;
}
}
printf("Count: %d \nSum: %d",count,sum);

}
