#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
void calendar()
{
int i;
system("clear");
printf("\t\t  ##  Calendar  ## \n");
system("cal 08 2021");
printf("\nEnter any number to return to main menu\n");
scanf("%d",&i);

}


 
