//
//  main.c
//  动态数组（指针与数组）
//
//  Created by Jacky on 2020/3/19.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 一开始未知数组长度，根据要求创建不同类型的指针，并且使用指针创建相应长度的数组，然后再完成不同的要求
 若要求创建整数数组，计算数组内所有数据的平均值
 若要求创建字符数组，找出数组内的最大字母
 若要求创建浮点数数组，找出数组的最小值
 要求程序整个过程不能使用数组下标，从数组创建、输入到搜索、比较、计算，到输出都必须使用指针
 提示：使用new关键字
 
 输入
 第一行输入t表示有t个测试实例
 第二行先输入一个大写字母表示数组类型，I表示整数类型，C表示字符类型，F表示浮点数类型；然后输入n表示数组长度。
 第三行输入n个数据
 依次输入t个实例
 
 输出
 每个根据不同的数组类型输出相应的结果
 
 样例输入
 3
 C 5
 A D E B C
 I 6
 22 55 77 33 88 55
 F 4
 3.1 1.9 6.5 4.8
 样例输出
 E
 55
 1.9
 */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, length, *p1;
    char type, *p2;
    float *p3;

    scanf("%d", &t);
    getchar();

    while (t--) {
        scanf("%c %d", &type, &length);
        getchar();
        if (type == 'I') {
            int ans = 0;
            p1 = (int *)malloc(length * sizeof(int));
            for (int i = 0; i < length; i++) {
                scanf("%d", p1 + i);
                getchar();
                ans += *(p1 + i);
            }
            ans /= length;
            printf("%d\n", ans);
        } else if (type == 'C') {
            char ans = 'A';
            p2 = (char *)malloc(length * sizeof(char));
            for (int i = 0; i < length; i++) {
                scanf("%c", p2 + i);
                getchar();
                if (*(p2 + i) > ans) {
                    ans = *(p2 + i);
                }
            }
            printf("%c\n", ans);
        } else if (type == 'F') {
            float ans = INT_MAX;
            p3 = (float *)malloc(length * sizeof(float));
            for (int i = 0; i < length; i++) {
                scanf("%f", p3 + i);
                getchar();
                if (*(p3 + i) < ans) {
                    ans = *(p3 + i);
                }
            }
            printf("%.1f\n", ans);
        }
    }

    return 0;
}