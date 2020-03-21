//
//  main.c
//  统计字符个数
//
//  Created by Jacky on 2020/3/19.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 对于任意输入的字符串(可以包含字母，数字，标点符号等), 用指针实现统计其包含字符的个数。
 
 要求不允许使用任何字符串库函数。
 
 输入
 第一行输入T表示有T个测试实例
 
 第二行输入一个字符串，字符串可以包含字母、数字、标点符号等
 
 以此类推输入下一个数据
 
 输出
 输出每个输入字符串的长度
 
 样例输入
 1
 1234567890
 样例输出
 10
 */

#define N 1000
#include <stdio.h>

int strlength(char a[]) {
    int i = 0;
    while (a[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    int n;
    char input[N];
    scanf("%d", &n);
    while (n--) {
        scanf("%s", input);
        printf("%d\n", strlength(input));
    }
    return 0;
}
