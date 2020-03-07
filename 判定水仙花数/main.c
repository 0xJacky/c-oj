//
//  main.c
//  判定水仙花数
//
//  Created by Jacky on 2020/3/5.
//  Copyright © 2020 Jacky. All rights reserved.
//
/*
 题目描述
 水仙花数也被称为超完全数字不变数、自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数。
 水仙花数是指一个 n 位数（n≥3 ），它的每个位上的数字的 n 次幂之和等于它本身，例如：1^3 + 5^3+ 3^3 = 153。输入一个三位数，判定其是否水仙花数。
 输入
 一个三位数
 输出
 输出0或1，0表示不是水仙花数，1表示是水仙花数。
 样例输入
 153
 样例输出
 1
 */
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, input;
    scanf("%d", &input);
    
    a = input / 100;
    b = (input % 100)/ 10;
    c = (input % 100) % 10;
    
    if (pow(a, 3) + pow(b, 3) + pow(c, 3) == input) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    return 0;
}
