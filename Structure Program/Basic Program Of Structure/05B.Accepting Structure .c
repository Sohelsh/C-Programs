#include<stdio.h>
#include<conio.h>

 struct Bus_Stand
 {
     char Bus_Name[20];
     int Bus_Numbar;
 };
 int main()
 {
     struct Bus_Stand Bus[3];

     strcpy(Bus[0].Bus_Name,"PUNE");    //Bus Number One
     Bus[0].Bus_Numbar=3333;

     strcpy(Bus[1].Bus_Name,"KHOLAPUR");    //Bus Number Two
     Bus[1].Bus_Numbar=2343;

     strcpy(Bus[2].Bus_Name,"MUMBAI");      //Bus Number Three
     Bus[2].Bus_Numbar=9876;

     printf("\n*****Frist Numabr Bus*****\n\n Bus Name=%s \n Bus_Number =%d \n",Bus[0].Bus_Name,Bus[0].Bus_Numbar);
     printf("\n*****Second Numbar Bus*****\n\n Bus Name=%s \n Bus_Number =%d \n",Bus[1].Bus_Name,Bus[1].Bus_Numbar);
     printf("\n*****Third Numbar Bus******\n\n Bus Name=%s \n Bus_Number =%d \n",Bus[2].Bus_Name,Bus[2].Bus_Numbar);
 }

