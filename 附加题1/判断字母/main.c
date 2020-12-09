//
//  main.c
//  判断字母
//
//  Created by Jacky on 2020/3/5.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入一个字符，判定该字符是否是字母。
 (提示：可使用ctype.h中的函数）
 输入
 字符
 输出
 若该字符是字母，输出ALPHA; 否则，输出NO
 样例输入
 Y
 样例输出
 ALPHA
 提示
 ctype.h中的isalpha函数，可判断某个字符是否是字母，可查询该函数具体用法。
 */

#include <ctype.h>
#include <stdio.h>

int main() {
    char input;
    scanf("%c", &input);
    if (isalpha(input)) {
        printf("ALPHA\n");
    } else {
        printf("NO\n");
    }
    return 0;
}