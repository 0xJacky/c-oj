//
//  main.c
//  计算并输出1!+2!+3!+...+n!
//
//  Created by Jacky on 2020/3/12.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入n，计算并输出n项阶乘的和
 
 输入
 n
 
 输出
 n项阶乘的和
 
 样例输入
 4
 样例输出
 33
 */

#include <stdio.h>

int main() {
    int n, sum = 0, t = 1;
    
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        t *= i;
        sum += t;
    }
    
    printf("%d\n", sum);
    
    return 0;
}
