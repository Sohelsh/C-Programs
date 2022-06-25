#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 struct Workshop
 {
     char Stu_Name[8];
     char Stu_Course[8];
     int  Stu_Fee;
 };

  int main()
  {
      int *ptr = NULL,Cnt = 0,i =0;
      struct Workshop wor[3];

      printf("\n Entar Count = ");
      scanf("%d",&Cnt);

      ptr=(struct Workshop*)malloc(Cnt*sizeof(struct Workshop));

      for(i = 0;i < Cnt; i++)
      {
          printf("\n Entar Student Name = ");
          scanf("%s",&wor[i].Stu_Name);

          fflush(stdin);

          printf("\n Entar Student Course = ");
          scanf("%s",&wor[i].Stu_Course);

          printf("\n Entar Student Fee = ");
          scanf("%d",&wor[i].Stu_Fee);
      }
      for(i = 0; i < Cnt; i++)
      {
          printf("\n Student Name = %s \n Student Course = %s \n Student Fee= %d",wor[i].Stu_Name,wor[i].Stu_Course,wor[i].Stu_Fee);


      }
       getch();
       return 0;


  }
