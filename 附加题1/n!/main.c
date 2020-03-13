//
//  main.c
//  n!
//
//  Created by Jacky on 2020/3/6.
//  Copyright © 2020 Jacky. All rights reserved.
//
/*
 题目描述
 计算n!，就是计算1*2*3*...*n的乘积。注意0！=1。
 
 输入
 n的值
 
 输出
 n!的值
 
 样例输入
 5
 样例输出
 5!=120
 */

#include <stdio.h>

int main() {
    int input;
    int t = 1;
    scanf("%d", &input);
    
    for (int i = 1; i<=input ; i++) {
        t *= i;
    }

    printf("%d!=%d\n", input, t);
    
    return 0;
}
