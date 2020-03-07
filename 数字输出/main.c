    //
    //  main.c
    //  数字输出
    //
    //  Created by Jacky on 2020/3/6.
    //  Copyright © 2020 Jacky. All rights reserved.
    //

/*
 题目描述
 给出一个不多于5位的正整数，要求如下：
 
 1、求出它是几位数
 
 2、分别输出每一位上的数字，数字之间用1个空格隔开
 
 3、按逆序输出各位数字，例如原数为321,应输出123
 
 输入
 输入一个不大于5位的正整数
 
 输出
 第一行输出位数
 
 第二行从左到右输出每一位上的数字，数字间用一个空格分开，注意最后一个数字后面没有空格
 
 第三行按逆序输出这个数
 
 样例输入
 12345
 样例输出
 5
 1 2 3 4 5
 54321
 */

#include <stdio.h>

int main() {
    int input, t[5], digits;
    
    scanf("%d", &input);
    
    if (input / 10000) digits = 5;
    else if (input / 1000) digits = 4;
    else if (input / 100) digits = 3;
    else if (input / 10) digits = 2;
    else digits = 1;
    
    t[4] = input / 10000;
    t[3] = input / 1000 % 10;
    t[2] = input / 100 % 10;
    t[1] = input / 10 % 10;
    t[0] = input % 10;
    
    printf("%d\n", digits);
    
    for (int i = digits-1; i > -1; i--) {
        printf("%d ", t[i]);
    }
    
    printf("\n");
    
    for (int i = 0; i < digits; i++) {
        printf("%d", t[i]);
    }
    
    printf("\n");
    
    return 0;
}
