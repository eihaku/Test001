#include <string>
#include "Test001.h"
#include "carend.h"
#include "stdio.h"


int fun6_3_2(int year,int month)
{
    int day;
    int lastday[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

        if (month > 12 ||month < 0)
        {
            printf("monthÈëÁ¦¥¨¥é©`\n");
            return -1;
        }
        if (month != 2)
        {
            day = lastday[month - 1];
        }
        else {
            day = lastday[month - 1] + runyear(year);
        }
        printf("num = %d\n", day);
    return 0;
}

int fun6_3_1(int year, int month)
{
    int temp1 = year;
    int temp2 = month;
    int num;
    int i;
    char week[][7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
    num = getdays(month, year);
    printf("num = %d\n", num);
    for (i = 0; i <= 6; i++)
    {
        printf("  %s", week[i]);
    }
    printf("\n");
    //for (i = 26; i < 29; i++)
    //{
    //    printf("     ");
    //}
    for (i = 1; i <= num; i++)
    {
        if (i % 7 == 0)
        {
            printf("%4d\n", i);
        }
        else
        {
            printf("%4d ", i);
        }
    }

    return 0;
}
int getdays(int month, int year)
{
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
        break;

    case 2:
        if (runyear(year))
        {
            return 29;
            break;
        }
        else
        {
            return 28;
            break;
        }
    }
}
int runyear(int year)
{
    int flag = 0;
    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    {

        flag = 1;
    }
    return flag;
}


