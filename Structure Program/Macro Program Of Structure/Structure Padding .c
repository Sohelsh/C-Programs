#include<stdio.h>
#include<conio.h>


struct Collage
{
        char Stu_Name[7];
        int Stu_Roll_No;
        long int Stu_Mo_No;
        float Stu_Per;
        char Stu_Addres[9];                           /* You Can Avoid Padding like Small Data Type write First
                                        and Big data Type After Step By Step */
};
int main()                                            //or using Header File #program pack(1)
{
        struct Collage Stu1;

        printf("\n Size Of Structure =%d",sizeof(Stu1));


        getch();
        return 0;
}
