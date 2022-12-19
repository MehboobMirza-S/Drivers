#include <stdio.h>
//#include <conio.h>
#include <string.h>
#include<stdlib.h>
struct drivers
{
    int no;
    char name[40];
    char license[40];
    char route[30];
    char ex[10];
    char age[10];
};

int main()
{
    struct drivers d[50];
    for (int k = 0; k <= 50; k++)
    {
        d[k].no = 1000;
    }
    printf("Hello Sir!\nThis program is used to store information of Drivers \n");
    printf("Please Enter Your information below :\n");

    char b;
    char a;
    char bs[23];
a1:
    printf("\n 1 for add\n 0 for exit \n   :");
    scanf("%s", &b);
    switch (b)
    {
    case '1':
        //clrscr();
        system ("cls");
        for (int i = 0; i < 50; i++)
        {
            //clrscr();
            system ("cls");
            printf("\n No.%d driver details :	\n", i + 1);
            gets(bs);
            d[i].no = i;
            printf("\n Name : ");
            //scanf("%s",d[i].name);
            gets(d[i].name);
            //fgets(d[i].name,11,stdin);

            printf(" City (name) :");
            //scanf("%s",d[i].route);
            gets(d[i].route);
            //fgets(d[i].route,30, stdin);

            printf(" License :");
            //scanf("%s", d[i].license);
            gets(d[i].license);
            //fgets(d[i].license,30, stdin);

            printf(" Experience (years) :");
            //scanf("%s", d[i].ex);
            gets(d[i].ex);
            //fgets(d[i].ex,30, stdin);

            printf(" Age (years) :");
            //scanf("%s", d[i].age);
            gets(d[i].age);
            //fgets(d[i].age,30, stdin);
        a2:
            printf("\n 1 for add\n 0 for check details  \n   :");
            scanf("%c", &a);
            if (a == '1')
            {
                continue;
            }
            else if (a == '0')
            {
                //clrscr();
                system ("cls");
                goto print;
            }
            else
            {
                printf("This is invalid! Please re-enter :");
                goto a2;
            }
        }
    case '0':

        goto end;
    default:
        printf("\nThis is invalid! Please re-enter :");
        goto a1;
    }
    int c;
print:

    printf("\n Enter 999 to exit");
    printf("\nEnter the number of driver (1 to 50 only ) :");
    scanf("%d", &c);
    c = c - 1;
    if (c == 998)
    {
        goto end;
    }
    else if (c >= 50 && c != 999)
    {
        printf("\nThis programs stores only information of total 50 drivers \n So enter a number from 1 to 50.\n");
        goto print;
    }
    else
    {
        if (d[c].no != 1000)
        {
            //clrscr();
            system ("cls");
            printf("\n Details are given below	\n");
            int i = c;
            
            printf("\n      No.%d Driver details :	\n", i + 1);
            printf("\n His Name is %s.\n He is %s years old.\n He has %s years of driving experience.\n He has awesome driving skills.\n He is from %s.\nHere is his license id : %s\n", d[i].name, d[i].age, d[i].ex, d[i].route, d[i].license);
            goto print;
        }
        else
        {
            //clrscr();
            system ("cls");
            printf("\n You haven't entered the details of driver no.%d \n Re-enter the details \n",c+1);
            goto print;
        }
    }
end:
    return 0;
}