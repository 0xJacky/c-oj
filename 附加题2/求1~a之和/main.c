//
//  main.c
//  求1~a之和
//
//  Created by Jacky on 2020/3/13.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 求以下三数的和,保留2位小数 1~a之和 1~b的平方和 1~c的倒数和
 输入
 a b c
 输出
 1+2+...+a + 1^2+2^2+...+b^2 + 1/1+1/2+...+1/c
 样例输入
 100 50 10
 样例输出
 47977.93
 */

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double ans = 0;
    
    scanf("%d %d %d", &a, &b, &c);
    
    for (int i = 1; i <= a; i++) {
        ans += i;
    }
    
    for (int i = 1; i <= b; i++) {
        ans += pow(i, 2);
    }
    
    for (int i = 1; i <= c; i++) {
        ans += pow(i, -1);
    }
    
    printf("%.2lf\n", ans);

    
    return 0;
}
