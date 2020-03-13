//
//  main.c
//  判断回文数
//
//  Created by Jacky on 2020/3/12.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 从键盘输入任意正整数，判断该数是否是回文数。所谓回文数就是从左到右读这个数与从右到左读这个数是一样的。例如12321、1221都是回文数。
 
 输入
 测试案例的个数n
 第一个测试值
 第二个测试值
 .......
 第n个测试值
 
 输出
 各个测试值是否是回文数，是，就输出Yes，不是，就输出No
 
 样例输入
 3
 4554
 123
 121
 样例输出
 Yes
 No
 Yes
 */

#include <stdio.h>

int d(int n);
int isPalindrome(int n, int div);

int main() {
    int t, n;
    
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        if (isPalindrome(n, d(n))) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}

int d(int n) {
    int d = 1;
    while (n >= 10) {
        d *= 10;
        n /= 10;
    }
    return d;
}

int isPalindrome(int n, int div) {
    int a, b;
    while (n != 0) {
        a = n / div;
        b = n % 10;
        if (a!=b) {
            return 0;
        }
        // 掐头去尾
        n %= div;
        n /= 10;
        div /= 100;
    }
    return 1;
}
