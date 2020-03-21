//
//  main.c
//  冒泡排序（数组）
//
//  Created by Jacky on 2020/3/15.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入n个数字，使用冒泡排序对其进行升序排序。
 
 输入
 测试次数T
 
 每组测试数据格式为：数字个数n，后跟n个数字。假设n<20。
 
 输出
 对每组测试数据，输出冒泡排序的每趟排序结果
 
 样例输入
 2
 5 10 4 43 1 2
 10 20 123 12 2 434 54 2 45 23 -10
 样例输出
 4 10 1 2 43
 4 1 2 10 43
 1 2 4 10 43
 1 2 4 10 43
 20 12 2 123 54 2 45 23 -10 434
 12 2 20 54 2 45 23 -10 123 434
 2 12 20 2 45 23 -10 54 123 434
 2 12 2 20 23 -10 45 54 123 434
 2 2 12 20 -10 23 45 54 123 434
 2 2 12 -10 20 23 45 54 123 434
 2 2 -10 12 20 23 45 54 123 434
 2 -10 2 12 20 23 45 54 123 434
 -10 2 2 12 20 23 45 54 123 434
 */

#include <stdio.h>

void printArray(int array[], int length);

int main() {
    int t, input[20], length, tmp;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &length);
        for (int j = 0; j < length; j++) {
            scanf("%d", input + j);
        }
        
        for (int a = 0; a < length - 1; a++) {
            for (int b = 0; b < length - 1 - a; b++) {
                if (input[b] > input[b+1]) {
                    tmp = input[b+1];
                    input[b+1] = input[b];
                    input[b] = tmp;
                }
            }
            printArray(input, length);
        }
    }
    return 0;
}

void printArray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
