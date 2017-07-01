#include<stdio.h>
#include<conio.h>
int main()
{
char a;
printf("enter the roman values("I V X L C D M")");
scanf("%c",&a);
switch(a)
{
case 'I':
printf("the value is 1");
break;
case 'V':
printf("the value is 5");
break;
case 'X':
printf("the value is 10");
break;
case 'L':
printf("the value is 50");
break;
case 'C':
printf("the value is 100");
break;
case 'D':
printf("the value is 500");
break;
case 'M':
printf("the value is 1000");
break;
}
return 0;
}
