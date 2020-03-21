//
//  main.c
//  任意相连
//
//  Created by Jacky on 2020/3/21.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 用指针对于任意输入4个字符串进行相连组合，输入的四个字符串用空格分开，要求输出所有的两两相连结果。例如输入的4个字符串为a bc def ghij， 输出结果为:
 a+a=aa
 a+bc=abc
 a+def=adef
 a+ghij=aghij
 bc+a=bca
 ... (以此类推)
 ghij+def=ghijdef
 ghij+ghij=ghijghij
 要求编写函数void stringcats(char *s, char *t), 字符串相连的部分用指针实现, 每个相连的操作都通过调用该函数实现。
 要求不允许使用任何字符串库函数。
 
 输入
 输入四个任意的字符串，用空格分开
 
 输出
 输出所有的两两相连结果
 
 样例输入
 a bc def ghij
 样例输出
 a+a=aa
 a+bc=abc
 a+def=adef
 a+ghij=aghij
 bc+a=bca
 bc+bc=bcbc
 bc+def=bcdef
 bc+ghij=bcghij
 def+a=defa
 def+bc=defbc
 def+def=defdef
 def+ghij=defghij
 ghij+a=ghija
 ghij+bc=ghijbc
 ghij+def=ghijdef
 ghij+ghij=ghijghij
 */

#define T 4
#define N 100
#include <stdio.h>

int strlength(char *p) {
    int i = 0;
    while (*(p + i) != '\0') {
        i++;
    }
    return i;
}

void stringcats(char *s, char *t) {
    int i, ls = strlength(s), lt = strlength(t);
    char ans[N] = {'\0'};
    for (i = 0; i < ls; i++) {
        ans[i] = * (s + i);
    }
    for (int j = 0; j < lt; j++) {
        ans[i++] = * (t + j);
    }
    printf("%s+%s=%s\n", s, t, ans);
}

int main() {
    char p[T][N];
    
    for (int i = 0; i < T; i++) {
        scanf("%s", *(p + i));
    }
    
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            stringcats(*(p + i), *(p + j));
        }
    }
    
    return 0;
}
