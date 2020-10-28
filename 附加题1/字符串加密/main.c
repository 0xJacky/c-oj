//
//  main.c
//  字符串加密
//
//  Created by Jacky on 2020/3/5.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 将输入的一串字符串加密输出，译码规律是：用原来字母后面的第4个字母代替原来的字母．
 例如，字母"A"后面第4个字母是"E"．"E"代替"A"。因此，"China"应译为"Glmre"。
 请编一程序，从界面输入cl、c2、c3、c4、c5五个字符变量的值，经过运算，使c1、c2、c3、c4、c5分别变为加密后的字符输出。
 输入
 5个字符
 输出
 加密后的5个字符
 样例输入
 China
 样例输出
 Glmre
 */

#include <stdio.h>

int main() {
    char c[6];
    
    for (int i=0; i<5; i++) {
        scanf("%c", c+i);
        c[i] += 4;
    }
    
    c[5] = '\0';
    
    printf("%s\n", c);
    
    return 0;
}
