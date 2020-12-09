//
//  main.c
//  亲和数（函数）
//
//  Created by Jacky on 2020/3/21.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 古希腊数学家毕达哥拉斯在自然数研究中发现，220的所有真约数(即不是自身的约数)之和为：
 1+2+4+5+10+11+20+22+44+55+110＝284。
 而284的所有真约数为1、2、4、71、 142，加起来恰好为220。人们对这样的数感到很惊奇，并称之为亲和数。一般地讲，如果两个数中任何一个数都是另一个数的真约数之和，则这两个数就是亲和数。
 编写一个函数，判断给定的两个数是否是亲和数。
 
 输入
 测试次数t
 每组测试数据一行，包含两个整数A、B； 其中 0 <= A,B <= 600000;
 
 输出
 对于每组测试实例，如果A和B是亲和数的话输出YES，否则输出NO。
 
 样例输入
 3
 220 284
 28 28
 10000 3000
 
 样例输出
 YES
 NO
 NO
 */

#include <math.h>
#include <stdio.h>

int f(int n) {
    int ans = 1;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            ans += i;
        }
    }
    return ans;
}

int main() {
    int t, a, b;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &a, &b);
        if (f(a) == b && a != b) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}