#include<stdio.h>
#include<conio.h>

 char Uppercase_And_Lowercase(char);

 int main()
 {
          char Ch =  '\0';

          printf("\n Enter Character = ");
          scanf("%c",&Ch);

          Uppercase_And_Lowercase(Ch);     //Function Call

 }
 char Uppercase_And_Lowercase(char C)
 {
     if(C >= 'A' && C <='Z')
     {
          printf("\n***Given Character Is Uppercase***");

          getch();

          printf("\n Uppercase Series Is: ");

          for(C = 'A';C <= 'Z';C++)
          {
              printf(" %c ",C);
          }

     }
     else if(C >= 'a' && C <= 'z')
     {
          printf("\n Given Character Is Lowercase ");

          getch();

          printf("\n Lowercase Series Is: ");

          for(C = 'a';C <= 'z';C++)
          {
              printf(" %c ",C);
          }

     }
     else
     {
          printf("\n Invalid Input....");
     }

          getch();
          return;
 }

