//contacts code goes here
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
struct Contact {
   char name[30];
   char phone_no[20];
};
void contacts(){
printf("\t\t  ##  Contacts  ## \n");
FILE *inf;
int opt;
system("clear"); 
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
printf(" %d. %s \t  %s\n", i, inp.name, inp.phone_no);
i++;
}

printf("\n________________________________________________________________________________________________________");
printf("\nPress: \n 1 to add new contacts \n 2 to remove contacts  \n 3 to go back to the main menu");
printf("\n________________________________________________________________________________________________________\n");
fclose (inf);
option:
scanf("%d",&opt);

switch(opt){
    case 1:
    addContacts();
    break;
    case 2:
    delContacts();
    break;
    case 3:
    printf("\npress any to go back to main menu\n");
    getchar();
    
    break;
    default:
    printf("please press a valid key\n");
    getchar();
    goto option;
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
 printf("Enter contact name: \n");
 getchar();
gets(inp.name);
printf("Enter contact number : \n");
getchar();
gets(inp.phone_no);
fwrite (&inp, sizeof(struct Contact), 1, of);
fclose (of);
contacts();
}


void delContacts(){
   FILE *fp,*ft;
  fp=fopen("db.txt","r");
  ft=fopen("db2.txt","w");
struct Contact inp;   
   int indx,i=1;
  printf("Enter the index number of the contact to be deleted: ");
  scanf("%d",&indx);
  while(fread(&inp,sizeof(inp),1,fp)!=0){

            if (!(i==indx))
              
                fwrite(&inp,sizeof(inp),1,ft);
  i++;
  }
  fclose (fp);
  fclose(ft);
   remove("db.txt");
   rename("db2.txt","db.txt");
  contacts();
}