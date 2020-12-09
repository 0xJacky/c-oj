//
//  main.c
//  有你没我
//
//  Created by Jacky on 2020/3/21.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 设有2张表单A和B各保存一组学生记录，每个学生记录包含学号、姓名和性别三个信息。
 从表单A中删除与表单B有相同记录的学生，记录相同是指姓名和性别都要相同但学号可以不同
 可采用二维数组或结构体来保存学生记录，学生姓名用英文字母表示，性别用M（男）和F（女）表示。
 要求不允许使用字符串比较的库函数，例如strcmp不能使用。必须自己定义一个函数，而且在函数内实现字符串比较的功能，字符串相等返回1，不等返回-1
 
 输入
 第一行输入表单A的长度n，即学生个数
 接着每3行输入表单A的n个学生的学号、姓名、性别，每个一行
 接着输入表单B的长度m
 接着输入表单B的m个学生记录，类似表单A
 
 输出
 输出表单A删除记录后的学生学号，一行输出一个学号
 
 样例输入
4
1001
Wang
M
1002
Li
M
1003
Zhang
F
1004
Wei
M
5
2001
Zhang
F
2002
Ma
F
2003
Wang
F
2004
Li
M
2005
Luo
M
 样例输出
 1001
 1004
 */

#define N 100
#include <stdio.h>

struct Student {
    int id;
    char name[20];
    char gender;
    int hide;
} a[N], b[N];

int strLength(char *s) {
    int a = 0;
    while (*(s + a) != '\0') {
        a++;
    }
    return a;
}

int strCmp(char *s, char *t) {
    int ls, lt, flag = 1;
    ls = strLength(s);
    lt = strLength(t);
    if (ls > lt) return 0;
    if (ls < lt) return 0;
    for (int i = 0; i < ls; i++) {
        if (*(s + i) != *(t + i)) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main() {
    int n, m;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i].id);
        scanf("%s", a[i].name);
        getchar();
        scanf("%c", &a[i].gender);
        getchar();
    }

    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i].id);
        scanf("%s", b[i].name);
        getchar();
        scanf("%c", &b[i].gender);
        getchar();
        for (int j = 0; j < n; j++) {
            if (strCmp(a[j].name, b[i].name) && a[j].gender == b[i].gender) {
                a[j].hide = 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i].hide == 0) {
            printf("%d\n", a[i].id);
        }
    }
    return 0;
}