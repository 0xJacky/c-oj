//
//  main.c
//  求一行字符中字母、空格、数字等的个数（循环)
//
//  Created by Jacky on 2020/3/13.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。
 
 输入
 一行字符
 
 输出
 统计值
 
 样例输入
 aklsjflj123 sadf918u324 asdf91u32oasdf/.';123
 样例输出
 23 16 2 4
 */

#include <ctype.h>
#include <stdio.h>

int main() {
    int alpha = 0, number = 0, space = 0, other = 0;
    char t;

    while (1) {
        t = getchar();
        if (t == '\n') {
            break;
        } else if (isalpha(t)) {
            alpha++;
        } else if (isalnum(t)) {
            number++;
        } else if (isspace(t)) {
            space++;
        } else {
            other++;
        }
    }

    printf("%d %d %d %d\n", alpha, number, space, other);

    return 0;
}