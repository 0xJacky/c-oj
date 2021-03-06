//
//  main.c
//  数组删除
//
//  Created by Jacky on 2020/3/15.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 定义一个10个元素的整型数组，首先输入10个元素的值，然后输入需要删除的元素的值，如果数组中存在该元素，删除它，
 并输出删除后的数组的其余元素（注意，数组元素之间以空格分隔，最后一个元素后换行）；
 如果数组中不存在该元素，输出“Not found”。
 
 输入
 测试数据的组数n
 第一组测试数据的10个元素
 需要删除的值
 第二组测试数据的10个元素
 需要删除的值
 ..........
 输出
 删除指定元素后的数组输出
 或
 Not found
 样例输入
 3
 1 2 3 4 5 6 7 8 9 10
 5
 1 21 32 4 5 69 7 88 9 102
 11
 100 21 3 4 54 6 7 8 19 10
 100
 样例输出
 1 2 3 4 6 7 8 9 10
 Not found
 21 3 4 54 6 7 8 19 10
 */

#define N 10
#include <stdio.h>

int main() {
    int n, input[N], output[N], needle, flag = 0, k = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        flag = 0;
        k = 0;
        for (int j = 0; j < N; j++) {
            scanf("%d", input + j);
        }
        scanf("%d", &needle);
        for (int j = 0; j < N; j++) {
            if (input[j] == needle) {
                flag = 1;
            } else {
                output[k++] = input[j];
            }
        }

        if (flag) {
            for (int j = 0; j < N - 1; j++) {
                printf("%d ", output[j]);
            }
        } else {
            printf("Not found");
        }
        printf("\n");
    }

    return 0;
}