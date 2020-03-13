//
//  main.c
//  输出m到n之间的水仙花数
//
//  Created by Jacky on 2020/3/11.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 如果一个三位数等于它自己的每一位数字的立方之和，则称此数为“水仙化数”，如153=1^3+5^3+3^3。给出范围的起止值，输出该范围的水仙花数。
 
 输入
 范围的开始与终止值
 
 输出
 该范围的水仙花数
 
 样例输入
 100 999
 样例输出
 153
 370
 371
 407
 */

#include <stdio.h>

int main() {

    int min, max, h, t, b;
    
    scanf("%d %d", &min, &max);
    
    for (int i = min; i<=max; i++) {
        
        h = i / 100;
        t = i / 10 % 10;
        b = i % 10;
        
        if (h * h * h + t * t * t + b * b * b == i) {
            printf("%d\n", i);
        }
        
    }
    
    return 0;
}
