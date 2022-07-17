#include<stdio.h>
#include<conio.h>
#define Size 5

 int Accepts_Element(int N1[]);
 int Sum_Of_Element(int N2[]);

  int main()
  {
          int Arr[Size] = {0};

          Accepts_Element(Arr);

          getch();

          printf("\n Summation Of Elements Is = %d",Sum_Of_Element(Arr));
  }
  int Accepts_Element( int N1[])
  {
          int i = 0;

          for(i = 0;i < Size;i++)
          {
             printf("\n Entar Elements = ");
             scanf("%d",&N1[i]);
          }
          return;

  }
   int Sum_Of_Element(int N2[])
   {
          int i = 0, Sum_Element = 0;

           for(i = 0;i < Size;i++)
           {
                Sum_Element = Sum_Element + N2[i];
           }

           return Sum_Element;
   }


