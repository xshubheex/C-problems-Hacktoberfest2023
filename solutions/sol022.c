#include <stdio.h>

int main()
{
 int mark;
 printf("Enter mark: ");
 scanf("%d", &mark);
 puts(mark >= 40 ? "Passed" : "Failed");
 return 0;
}
