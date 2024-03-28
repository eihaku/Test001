#include <stdio.h>
#include <iostream>
#include "Test001.h"

int main()
{
    int year;
    int weight, speed;
    int money;
    int average;
    int sum;
    int a, b, c, d;
    int eki[10];
    //scanf("%d", &year);

    ////fun2_2(year);
    //printf("重さを入力してください\n");
    //scanf("%d", &weight);
    //printf("速達しますか１はします、０はしません\n");
    //scanf("%d", &speed);
    //money = fun2_4(weight,speed);

    //average=fun3_1();
    //printf("%d", average);

    //fun3_2();

    //printf("整数を入力してください");
    //scanf("%d", &arr);
    //sum = fun3_4(arr);
    //printf("%d", sum);


    //printf("输入数字1 :");
    //scanf("%d", &a);
    //printf("输入数字2 :");
    //scanf("%d", &b);
    //c =fun3_7(a, b);
    //d = fun3_7_1(a, b);
    //printf("%d\n", c);
    //printf("%d\n", d);

    //return 0;

    //printf("输入正方形边长：");
    //scanf("%d", &a);
    //fun4_1(a);

    //{
    //    char arr[] = {3,5,6,7,89,3,2,3,2,2};
    //    a = sizeof(arr);
    //    fun4_2(arr,a);
    //}

    //{
    //    fun4_4(10);
    //}

    //{
    //    fun4_5(15);
    //}

    //fun6_1();

    //fun6_2(900);
    {
        int f;
        int g;
        printf("金額");
        scanf("%d", &f);
        printf("支払い金額");
        scanf("%d", &g);
        fun6_5_1(f, g);
    }

    //{
    //    int temp = 0;
    //    struct student
    //    {
    //        char name[20];
    //        int score;
    //    };
    //    struct student stu[3];
    //    for (int i = 0; i < 3; i++) {
    //        printf("学生の名前、点数を入力してください");
    //        scanf("%s,%d", stu[i].name, stu[i].score);
    //        temp += stu[i].score;
    //        if (stu[i].name == "END")
    //        {
    //            temp = fun6_6(temp);
    //            printf("%d", temp);
    //        }
    //    }
    //}


    fun6_8();

    return 0;
}

