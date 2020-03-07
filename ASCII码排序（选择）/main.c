//
//  main.c
//  ASCII码排序（选择）
//
//  Created by Jacky on 2020/3/7.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
 
 输入
 输入多组数据，每组占一行，有三个字符组成，之间无空格
 
 输出
 对于每组输入数据，输出一行，字符中间用一个空格分开。
 
 样例输入
 qwe
 asd
 zxc
 样例输出
 e q w
 a d s
 c x z
 */

#define N 3
#include <stdio.h>

int main() {
    
    char input[N], t;
    
    while (scanf("%s", input) != EOF) {
        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - 1 - i; j++) {
                if (input[j] > input[j + 1]) {
                    t = input[j+1];
                    input[j+1] = input[j];
                    input[j] = t;
                }
            }
        }
        printf("%c %c %c\n", input[0], input[1], input[2]);
    }
    
    return 0;
}
