//
//  main.c
//  字符串比较（指针与字符）
//
//  Created by Jacky on 2020/3/20.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 编写一个函数比较两个字符串，参数是两个字符指针（要求显式定义，例如char *S, char *T)，比较字符串S和T的大小。如果S大于T，则返回1，如果S小于T则返回-1，如果S与T相等则返回0。
 
 比较规则：
 1.把两个字符串的相同位置上的字符进行比较，字符的大小比较以ASCII值为准
 2.在比较中，如果字符串S的字符大于字符串T的字符的数量超过小于的数量，则认为S大于T，如果等于则S等于T，如果小于则S小于T
 例如S为aaccdd，T为eebbbb，每个位置比较得到S前两个字母都小于T，但后4个字母都大于T，最终认为S大于T
 3.如果两个字符串长度不同，则更长的字符串为大
 在主函数中输入两个字符串，并调用该函数进行判断，在判断函数中必须使用函数参数的指针进行字符比较
 
 输入
 输入t表示有t个测试实例
 接着每两行输入两个字符串
 依次输入t个实例
 
 输出
 每行输出一个实例的比较结果
 
 样例输入
 3
 aaccdd
 eebbbb
 AAbb++
 aaEE*-
 zznnkk
 aaaaaaa
 样例输出
 1
 0
 -1
 */

#define N 1000
#include <stdio.h>

int strLength(char *s) {
    int a = 0;
    while (* (s + a) != '\0') {
        a++;
    }
    return a;
}

int strCmp(char *s, char *t) {
    int a = 0, b = 0, ls, lt;
    ls = strLength(s);
    lt = strLength(t);
    if (ls > lt) return 1;
    if (ls < lt) return -1;
    for (int i = 0; i < ls; i++) {
        if (*(s + i) > *(t + i)) {
            a++;
        } else {
            b++;
        }
    }
    if (a > b) return 1;
    if (a == b) return 0;
    return -1;
}

int main() {
    int t, ans;
    char a[N], b[N];
    scanf("%d", &t);
    while (t--) {
        scanf("%s", a);
        scanf("%s", b);
        ans = strCmp(a, b);
        printf("%d\n", ans);
    }
    return 0;
}
