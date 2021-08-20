//contacts code goes here
#include<stdio.h>

#include <stdlib.h>
struct Contact {
   char name[20];
   long long int phone_no;
};
void contacts(){
FILE *inf;
int opt;
system("cls"); 
inf= fopen ("db.txt", "r");
if ( inf== NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }
int i=1;
struct Contact inp;   
printf("_________________________________________________________________________________________________________\n");
printf("                                           CONTACTS                                                     \n\n");
while(fread(&inp, sizeof(struct Contact), 1, inf)){
printf(" %d. %s \t  %d\n", i, inp.name, inp.phone_no);
i++;
}

printf("\n________________________________________________________________________________________________________");
printf("\nPress: \n 1 to add new contacts \n 2 to remove contacts \n 3 for editing contact details \n 4 to go back to the main menu");
printf("\n________________________________________________________________________________________________________\n");
fclose (inf);
scanf("%d",&opt);
switch(opt){
    case 1:
    addContacts();
    break;

    case 2:
    viewContacts();
    break;
    
}
}

void addContacts(){
  FILE *of;  
struct Contact inp; 
 of= fopen ("db.txt", "a+");
if (of == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }
 printf("Enter contact name: ");
scanf("%s",&inp.name);
printf("\nEnter contact number : ");
scanf("%lld",&inp.phone_no);
fwrite (&inp, sizeof(struct Contact), 1, of);
fclose (of);
contacts();
}

void viewContacts(){
   FILE* of;
   struct Contact inp;
   of=fopen("db.txt","r");
   if(of==NULL){
      printf("\n Error in opening file");
   exit(1);
   }
   while(fread(&inp,sizeof(inp),1,of)==1){
      printf("--------------Your Contact Record-----------\n\\n\n");
      printf("\nName : %c \nNumber : %lld",inp.name,inp.phone_no);
        getch();
         }
         fclose(of);
         
}