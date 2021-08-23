#include<stdio.h>
#include<math.h>
void calculator()
{
float a,b,r;
long int p,fact;
int i;
char n,w,m;
label1:
printf("_________________________________________________________________________________________________________\n");
printf("\t\t  ##  Calculator  ## \n");
printf("Enter your first number: ");
scanf("%f",&a);
label2:
printf("\nAdd(+)\nSubstract(-)\nMultiply(*)\nDivide(/)\nFactorial(!)\nnth power(^)\nnth root(r)\n\n");
printf("Enter the operator:");
scanf("%c",&w);
scanf("%c",&n);
switch(n)
{
case '+':
printf("Enter your second number: ");
scanf("%f",&b);
printf("%f + %f = %f",a,b,a+b);
break;
case '-':
printf("Enter your second number: ");
scanf("%f",&b);
printf("%f - %f = %f",a,b,a-b);
break;
case '*':
printf("Enter your second number: ");
scanf("%f",&b);
printf("%f * %f = %f",a,b,a*b);
break;
case '/':
printf("Enter your second number: ");
scanf("%f",&b);
printf("%f / %f = %f",a,b,a/b);
break;
case '!':
fact=1;
for(i=1;i<=a;i++)
{
fact=fact*i;
}
printf("%f! = %ld",a,fact);
break;
case '^':
printf("Enter power:");
scanf("%f",&b);
p=pow(a,b);
printf("%f ^ %f = %ld",a,b,p);
break;
case 'r':
printf("Enter n to find nth root:");
scanf("%f",&b);
r=pow(a,(1/b));
printf("%fth root of %f = %f",b,a,r);
break;
default:printf("\nInvalid input.\nPlease enter a valid operator.");
goto label2;
break;
}
label5:
printf("\nTry Again? (y/n) :");
scanf("%c",&w);
scanf("%c",&m);
switch(m)
{
case 'y':
goto label1;
break;
case 'Y':
goto label1;
break;
case 'n':
break;
case 'N':
break;
default:printf("\nInvalid input.\nPlease enter a valid option.");
goto label5;
}
}

