//
//  main.c
//  不三不四喜七之数
//
//  Created by Jacky on 2020/3/12.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 如果一个数字不能被3整数，也不能被4整除，但能被7整除，就称为不三不四喜七之数。
 
 给出数字N，统计1至N之间的满足条件的数值的数量
 
 输入
 第一行输入T表示有T个测试实例
 
 第二行起，每行输入1个N表示数值范围，输入T行
 
 输出
 每行输出1至N之间，满足条件的数值的个数
 
 样例输入
 2
 10
 100
 样例输出
 1
 8
 */

#include <stdio.h>

int main() {
    int t, n, ans = 0;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        ans = 0;
        for (int j = 1; j <= n; j++) {
            if ((j % 3 != 0) && (j % 4 != 0) && (j % 7 == 0)) {
                ans++;
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}