    //
    //  main.c
    //  菜单选择（选择）
    //
    //  Created by Jacky on 2020/3/7.
    //  Copyright © 2020 Jacky. All rights reserved.
    //

/*
 题目描述
 输出如下菜单：
 
 1 计算n!
 
 2 输出素数
 
 3 判定闰年
 
 根据输入（1、2、3），接受数据输入，计算n!或输出某范围内的所有素数或判定给定年是否闰年，并输出计算结果。
 
 要求：用switch实现。
 
 输入
 测试次数t
 
 每组测试数据格式如下：
 
 选项(1,2,3或其它），后跟需要的数据。
 
 如: 输入1 10，表示计算n!。
 
 输入2 10 100，表示输出10到100之间的所有素数。
 
 输入3 2000，表示判定2000是否闰年。
 
 输出
 对每组测试数据，首先输出菜单。
 
 根据输入选项，输出相应计算结果。如果选项非1到3，输出INPUT ERROR!。
 
 n！—输出计算结果。
 
 闰年—输出“2000是闰年”，“2017非闰年”等信息。
 
 样例输入
 2
 3 2000
 2 10 20
 
 样例输出
 1 计算n!
 2 输出素数
 3 判定闰年
 2000是闰年
 
 1 计算n!
 2 输出素数
 3 判定闰年
 11 13 17 19
 
 */

#include <stdio.h>
#include <math.h>

void count_factorial(int a);
void prime_number(int a, int b);
void is_leap(int a);

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i<t; i++) {
        int input[3];
        
        printf("1 计算n!\n2 输出素数\n3 判定闰年\n");
        
        for (int j = 0; j < 3; j++) {
            scanf("%d", input+j);
            if (getchar() == '\n') break;
        }
        
        switch (input[0]) {
            case 1:
                count_factorial(input[1]);
                break;
                
            case 2:
                prime_number(input[1], input[2]);
                break;
                
            case 3:
                is_leap(input[1]);
                break;
                
            default:
                printf("INPUT ERROR!");
                break;
        }
        printf("\n");
    }
    return 0;
}

void count_factorial(int t) {
    long long int n = 1;
    
    for (int i = 1; i<=t; i++) {
        n *= i;
    }
    printf("%lld\n", n);
}

void prime_number(int min, int max) {
    int flag = 1;
    if (min <= 1) {
        min = 2;
    }
    for (int i = min; i <= max; i++) {
        flag = 1;
        for (int j = 2; j <= sqrt((double)i); j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void is_leap(int y) {
    printf("%d", y);
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
        printf("是");
    } else {
        printf("非");
    }
    printf("闰年\n");
}
