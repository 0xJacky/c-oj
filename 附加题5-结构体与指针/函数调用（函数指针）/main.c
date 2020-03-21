//
//  main.c
//  函数调用（函数指针）
//
//  Created by Jacky on 2020/3/20.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 定义并实现三个函数：
 第一个函数是整数函数，返回类型为整数，参数是一个整数变量，操作是求该变量的平方值
 第二个函数是浮点数函数，返回类型为浮点数，参数是一个浮点数变量，操作是求该变量的平方根值。求平方根可以使用函数sqrt（浮点参数），将返回该参数的平方根，在VC中需要头文件cmath。
 第三个函数是字符串函数，无返回值，参数是一个字符串指针，操作是把这个字符串内所有小写字母变成大写。
 要求：定义三个函数指针分别指向这三个函数，然后根据调用类型使用函数指针来调用这三个函数。不能直接调用这三个函数。
 如果类型为I，则通过指针调用整数函数；如果类型为F，则通过指针调用浮点数函数；如果类型为S，则通过指针调用字符串函数
 
 输入
 第一行输入一个t表示有t个测试实例
 每行先输入一个大写字母，表示调用类型，然后再输入相应的参数
 依次输入t行
 
 输出
 每行输出调用函数后的结果
 
 样例输入
 5
 S shenzhen
 I 25
 F 6.25
 I 31
 S China
 样例输出
 SHENZHEN
 625
 2.5
 961
 CHINA
 */

#define N 100
#include <stdio.h>
#include <math.h>

int sq(int n) {
    return n * n;
}

float _sqrt(float n) {
    return sqrt(n);
}

void capital(char *p) {
    int i = 0;
    while (*(p + i) != '\0') {
        if (*(p + i) >= 97 && *(p + i) <= 122) {
            *(p + i) = *(p + i) - 32;
        }
        i++;
    }
}

int main() {
    int t, a, (*I)(int) = sq;
    float b, (*F)(float) = _sqrt;
    char type, input[N];
    void (*S)(char *) = capital;
    
    scanf("%d", &t);
    getchar();
    while (t--) {
        scanf("%c", &type);
        getchar();
        switch (type) {
            case 'S':
                scanf("%s", input);
                getchar();
                (*S)(input);
                printf("%s\n", input);
                break;
            case 'I':
                scanf("%d", &a);
                getchar();
                printf("%d\n", (*I)(a));
                break;
            case 'F':
                scanf("%f", &b);
                getchar();
                printf("%.1f\n", (*F)(b));
                break;
        }
    }
    return 0;
}
