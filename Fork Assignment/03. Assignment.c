#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0
// Count Of Zero
int main()
{
      int Num[15] ={'\0'};
      int i = 0 ,Z_Cnt = 0;

      printf("Enter A Number = ");
      gets(Num);

      while(Num[i] != '\0')
      {
             if(Num[i] == '0')
             {
                Z_Cnt++;
             }

             i++;
      }

      printf("Given Number Zero Count Is = %d",Z_Cnt);

      getch();
      return 0;
}
