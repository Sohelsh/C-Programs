#include<stdio.h>
#include<conio.h>

 int main()
 {
     int iNo = 24 , *iPtr1 = &iNo,*iPtr2 = &iNo;

     printf("\n Value If iNo Using Its Pointer iPtr1 = %d",*iPtr1);//24
     printf("\n Address Of iNo Using iPtr1 = %d",iPtr1);
     printf("\n Address Of iPtr1 = %d",&iPtr1);

     printf("\n\n Value If iNo Using Its Pointer iPtr2 = %d",*iPtr2);
     printf("\n Address Of iNo Using iPtr2 = %d",iPtr2);
     printf("\n Address Of iPtr2 = %d",&iPtr2);

     getch();

     iNo = 79;

     printf("\n\n New Value iNo Using Its Pointer iPtr2 = %d",*iPtr1);
     printf("\n New Value Of Variable Using Its Pointer iPtr2 = %d",*iPtr2);

     getch();

     *iPtr1 = 600;

     printf("\n\n New Value Of iNo = %d",iNo);
     printf("\n Value Of iNo Using Its Pointer iPtr1 = %d",*iPtr1);
     printf("\n Value Of Variable Using Its Pointer iPtr2 = %d",*iPtr2);

     getch();
     return 0;

 }
