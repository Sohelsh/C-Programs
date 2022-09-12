#include<stdio.h>
#include<conio.h>

 int main()
 {
     int No = 76;
     int *p = &No;
     int **q = &p;
     int ***r = &q;
     int ****s = &r;
     int *****t = &s;

     printf("\n No = %d",&No);
     printf("\n p  = %d",&p);
     printf("\n q  = %d",&q);
     printf("\n r  = %d",&r);
     printf("\n s  = %d",&s);
     printf("\n t  = %d",&t);

     getch();

     printf("\n %d",No);///76
     printf("\n %d",&No);///732
     printf("\n %d",&p);///728
     printf("\n %d",*p);///76
     printf("\n %d",**t);///724
     printf("\n %d",**(&r));///728
     printf("\n %d",&(***s));///728
     printf("\n %d",****t);///732
     printf("\n %d",&(**q));///732
     printf("\n %d",***(&t));///724
     printf("\n %d",**q);///76
     printf("\n %d",**(&q));///732

     getch();
     return 0;
 }
