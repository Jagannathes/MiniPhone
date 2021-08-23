#include<stdio.h>
#include <stdlib.h>
#include "calculator.h"
#include "display.h"
#include "calendar.h"
#include "contacts.h"
#include "tictac.h"
void main(){
  int n;
  home:
   system("clear"); 
display();
 //display page code here 
printf("\n\n\t\t##  Applications  ## \n\n1. Calculator\n2. Calendar\n3. Contacts\n4. Game\n5. Exit\n");
printf("Enter the corresponding number:");
scanf("%d",&n);
switch(n)
{
case 1:
calculator();
break;
case 2:
calendar();
break;
case 3:
contacts();
break;
case 4:
tictac();
break;
case 5:
goto quit;
}
goto home;
quit:
;
}
 