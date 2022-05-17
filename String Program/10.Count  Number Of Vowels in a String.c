#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{
  int i = 0,Count = 0;
  char S[40]={'\0'};
  
  printf("Enter A String = ");
  gets(S);
  
  while(S[i] != '\0')
  {
     if(S[i] == 'A'|| S[i] == 'a'|| S[i] =='E'||S[i] == 'e'|| S[i] == 'I'||S[i] =='i'||S[i]=='O'||S[i] == 'o'||S[i]== 'U'|| S[i]=='u')
      
     Count++;
     i++;
   }
   printf("\n Count Of String  %d", Count);
  
  
  getch();
  return 0;
}
