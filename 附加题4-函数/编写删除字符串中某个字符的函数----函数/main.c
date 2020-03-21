//
//  main.c
//  编写删除字符串中某个字符的函数----函数
//
//  Created by Jacky on 2020/3/18.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 编制函数del_char
 
 函数原型为 void del_char(char a[],char ch),函数的功能是删除a指向的字符串中值为ch的字符，例如从字符串"AscADef"中删除'A'后，字符串为"scDef"。
 
 输入
 需要删除的字符ch
 
 需要处理的字符串
 
 输出
 处理后的字符串
 
 样例输入
 A
 AscADef
 样例输出
 scDef
 */

#define N 100
#include <stdio.h>
#include <string.h>

void del_char(char a[], char ch) {
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] != ch) {
            printf("%c", a[i]);
        }
    }
    printf("\n");
}

int main() {
    char ch, s[N];
    scanf("%c", &ch);
    scanf("%s", s);
    del_char(s, ch);
    return 0;
}
