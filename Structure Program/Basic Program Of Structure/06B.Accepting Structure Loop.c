#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 struct Bus_Stand
 {
     char Bus_Name[20];
     int Bus_Numbar;
 };
 int main()
 {
      int i=0;

      struct Bus_Stand Bus[3];

      for(i = 0; i < 2 ;i++)
      {
         printf("\n %d Numbar Bus ",i+1);

         printf("\n\n Entar Bus Name = ");
         scanf("%[^\n]s",&Bus[i].Bus_Name);

         fflush(stdin);

         printf("\n\n Entar Bus Numbar = ");
         scanf("%d",&Bus[i].Bus_Numbar);

         fflush(stdin);
      }

      for(i = 0;i < 2 ;i++)
      {
          printf("\n\n Bus Name = %s \n Bus Numbar = %d \n",Bus[i].Bus_Name,Bus[i].Bus_Numbar);
      }

      getch();
      return 0;

 }


























