#include <string>
#include "Test001.h"
#include "carend.h"
#include "stdio.h"


int fun6_3_2(int year,int month)
{
    int day,temp,i,num;
    int lastday[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    char week[][7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };

        if (month > 12 ||month < 0)
        {
            printf("month入力エラー\n");
            return -1;
        }
        if (month != 2)
        {
            day = lastday[month - 1];
        }
        else {
            day = lastday[month - 1] + runyear(year);
        }
        printf("num = %d\n", day);     //月に数日ある
        temp = WhatDay(year, month, 1);//月一日は何曜日
        num = 7 - temp;                //土曜日の計算
        for (i = 0; i <= 6; i++)       //日から土を表示
        {
            printf("  %s", week[i]);
        }
        printf("\n");
        for (i = 0; i < temp; i++)     //一日は日曜日ではない場合スペース
        {
            printf("     ");
        }
        for (i = 1; i <= day; i++)     
        {
            if (i % num == 0)
            {
                printf("%4d\n", i);    //土曜日になったら\n
                num = num + 7;         //次週の土曜日を計算
            }
            else
            {
                printf("%4d ", i);
            }
        }


    return 0;
}
int WhatDay(int y, int m, int d)
{
    int a;
    if (m == 1 || m == 2)
    {
        m += 12;
        y--;
    }
    int iWeek = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
    switch (iWeek)
    {
    case 0:  a = 1; break;
    case 1:  a = 2; break;
    case 2:  a = 3; break;
    case 3:  a = 4; break;
    case 4:  a = 5; break;
    case 5:  a = 6; break;
    case 6:  a = 7; break;
    }
    printf("%d", a);
    return a;
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


