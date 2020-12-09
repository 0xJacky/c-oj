//
//  main.c
//  表达式求值
//
//  Created by Jacky on 2020/3/4.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
  题目描述
  对以下表达式进行求值，a、b、c是三个变量，它们都是小于100的自然数
  a+b>c&&b==c
  输入
  第一行输入T，表示后续有T个测试示例
  第二行开始，每行输入3个变量值，输入T行
  输出
  每行输出计算结果
  样例输入
  3
  5 6 7
  4 5 5
  6 1 9
  样例输出
  1
  0
*/
#include <stdio.h>

int main() {
    int a, b, c, t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        scanf("%d %d %d", &a, &b, &c);
        printf("%d\n", a + b > c && b == c);
    }
    return 0;
}