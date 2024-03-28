#include <string>
#include "Test001.h"
#include "stdio.h"



int fun6_12(int b)
{
    char a[11] = { -3,2,7,10,15,16,19,20,30,90 };
    int c = sizeof(a)/2;
    int temp;

    if (b > a[c])
    {
        for (int i = c; i <= sizeof(a); i++)
        {
            if (b < a[i]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
            
        }
    }
    if (b <= a[c])
    {
        for (int i = sizeof(a) / 2; i >= 0; i--)
        {
            if (i == 0)
            {
                a[i] = b;
            }
            if (b > a[i]) {
                temp = b;
                a[i + 1] = temp;
                break;

            }
        }
    }
    for (int i = 0; i <= 10; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}

int fun6_2(int b)
{
    int a[11] = { -3,2,7,10,15,16,19,20,30,90 };

    for (int i = 10; i > 0; i--)
    {
        if (b < a[i - 1])
        {
            a[i] = a[i - 1];
            if (i == 1)
            {
                a[i - 1] = b;
                break;
            }
        }
        else {
            a[i] = b;
            break;
        }
    }
    for (int i = 0; i <= 10; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}


//うるう年//
int fun2_2(int year) {
    char arr[12][4] = { "鼠", "牛", "虎", "兔", "龙", "蛇", "马","羊", "猴", "鸡", "狗", "猪" };
    int temp;

    if (year == 1996)
    {
        printf("鼠");
        return 0;
    }
    //temp = year - 1996;
    //year = temp > 0 ? temp :  - temp;

    //year = year % 12;
    //year = temp > 0 ? year : 12- year;


    //printf("%s", arr[year]);
    //return 0;

      if (year > 1996)
       {
           year =
           year = year % 12;
           return 0;
       }
       if (year < 1996)
       {
           year = -(year - 1996);
           year = year % 12;
           year = 12 - year;
           printf("%s", arr[year]);
           return 0;
       }


    return 0;
}

int fun2_4(int weight, int speed) //speed = 1速達; speed = 0　普通達
{
    int money = 0;
    if (weight <= 50)
    {
        printf("定形\n");
        if (weight <= 25)
        {
            money = 80;
            if (speed == 1)
            {
                money = money + 270;
            }

            printf("%d円", money);
        }
        else
        {
            money = 90;
            if (speed == 1)
            {
                money = money + 270;
            }

            printf("%d円", money);
        }
    }
    if (weight <= 500 && weight >50)
    {
        printf("定形外\n");
        if (weight <= 100)
        {
            money = 140;
            if (speed == 1)
            {
                money = money + 270;
            }

            printf("%d円", money);

        }
        else if (weight <= 150)
        {
            money = 200;
            if (speed == 1)
            {
                money = money + 270;
            }

            printf("%d円円", money);

        }
        else if (weight <= 250)
        {
            money = 240;
            if (speed == 1)
            {
                money = money + 270;
            }

            printf("%d円", money);

        }
        else if (weight <= 500)
        {
            money = 390;
            if (speed == 1)
            {
                money = money + 370;
            }
            printf("%d円", money);
        }
    }
    if (weight > 500)
    {
        printf("重さ５００超えました");
    }
    return money;
}

int fun3_1()
{
    float temp = 0;
    int a = 0;

    int arr[] = { 2,5,36000,3,2 };

    a = sizeof(arr);
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        temp += arr[i];
    }
    temp = temp / (sizeof(arr) / sizeof(int));
    return temp;
}

int fun3_2()
{
    char arr[] = { 'A','B' ,'C' ,'D' ,'E' ,'F' ,'G' ,'H' ,'I' ,'J','\0' };
    char temp[11];

    for (int i = 0; i < 10; i++)
    {
        int j = 9 - i;
        temp[j] = arr[i];
    }
    temp[10] = '\0';
    printf("%s", temp);

    return 0;
}

int fun3_4(int arr)
{
    int temp = 0;
    for (int i = 1; i <= arr; i++)
    {
        if (i % 2 != 0)
        {
            temp += i;

        }
    }
    return temp;
}

int fun3_70(int a, int b)
{
    int c;
    int min = a > b ? a : b;
    a = a % b;
    while (1)
    {
        if (a == 0)
        {
            min = b;
            break;
        }
        else
        {
            c = a;
            a = b % a;
            b = c;
        }

    }
    return min;
}

int fun3_7(int a, int b)
{
    int c;
    int min;

    if (a < b) {
        c = a;
        a = b;
        b = c;
    }

    while (1)
    {
        c = a % b;
       if (c == 0)
        {
            min = b;
            break;
        }
        else
        {
           a = b;
           b = c;
        }

    }
    return min;
}

int fun3_7_1(int a, int b)
{
    return (a * b) / fun3_7(a, b);
}

int fun4_1(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("*");

        }
        printf("\n");

    }
    return 0;
}

int fun4_2(char arr[],int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int k = 0; k < arr[i]; k++)
        {
               printf("*");
         }
     printf("q\n");

    }
    return 0;
}

int fun4_4(int a)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int fun4_5(int a)
{
   
    for (int i = 0; i < (a+1)/2; i++)
    {
        for (int k = 0; k < (a  - 1) / 2 - i; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i +1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = (a - 1) / 2; i > 0; i--)
    {
        for (int k = (a - 1) / 2-i; k >= 0; k--)
        {
            printf(" ");
        }

        for (int j = 2 * i - 1; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;

}

int fun6_1() {
    int year;

    for (int i = 1900; i <= 2500; i++)
    {
        year = i;
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    printf("%d\n", year);
                }
                else {
                }
            }
            else {
                printf("%d\n", year);
            }
        }
    }
    return 0;
}


/*おつりプロフラム*/
int fun6_5(int a, int b)
{
    int i;
    int j;
    int num[8] = { 5000,1000,500,100,50,10,5,1 };
    int temp;

    temp = b - a;

    for (i = 0; i < 8; i++)
    {
        j = 0;
        while (temp >= num[i])
        {
            j++;
            temp = temp - num[i];
        }
        printf("%d円%d枚\n", num[i], j);
    }
    return 0;

}

//学生成績平均値//
int fun6_6()
{
    int r;
    int temp = 0;
    char name[] = "END";

    struct student
    {
        char name[20];
        int score;
    };
    struct student stu[20];
    for (int i = 0; i < 20; i++) {
        printf("学生の名前を入力してください");
        scanf("%s", stu[i].name);

        r = stricmp(stu[i].name, name);
        if (r == 0)
        {
            if (i == 0)
            {
                return 0;
            }
            temp = temp / i;
            printf("成績平均値は%d", temp);
        }
        printf("学生の点数を入力してください");
        scanf("%d", &stu[i].score);

        temp += stu[i].score;
    }
    return 0;
}

/*おつりプロフラム*/
int fun6_8()
{
    int temp;
    int num[] = { 9,3,8,1,5,10,6,4,2,7 };
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (num[i] > num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", num[i]);
    }
    return 0;
}