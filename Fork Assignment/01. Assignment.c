#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0
//Count Of Negative Numbers

int main()
{
      int Num[15] ={'\0'};
      int i = 0 ,N_Cnt = 0;

      printf("Enter A Number = ");
      gets(Num);

      while(Num[i] != '\0')
      {
        if(Num[i] <'0')
        {
            N_Cnt++;
        }

            i++;
      }

      printf("Given Numbers Negative Count Is = %d",N_Cnt);

      getch();
      return 0;
}
