//
//  main.c
//  字符衔接
//
//  Created by Jacky on 2020/3/17.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 已知两个字符串，把第一个字符串的头3个字符和第二个字符串的末尾3个字符合并成一个新字符串
 
 输入
 第一行输入T表示有T个测试实例
 第二行输入第1个字符串，设定字符串只包含字母或数字，长度大于3
 第三行输入第2个字符串，设定字符串只包含字母或数字，长度大于3
 以此类推输入下个实例
 
 输出
 每行输出合并后新的字符串
 
 样例输入
 2
 china1949
 szu1983
 2012year
 day14
 样例输出
 chi983
 201y14
 */

#define N 20
#include <stdio.h>
#include <string.h>

int main() {
    int t, l;
    char a[N] = {'\0'}, b[N] = {'\0'}, output[N] = {'\0'};
    scanf("%d", &t);
    while (t--) {
        scanf("%s", a);
        scanf("%s", b);
        for (int i = 0; i < 3; i++) {
            output[i] = a[i];
        }
        l = (int)strlen(b) - 3;
        for (int i = 0; i < 3; i++) {
            output[i + 3] = b[l + i];
        }
        printf("%s\n", output);
    }

    return 0;
}