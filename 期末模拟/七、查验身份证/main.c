//
//  main.c
//  七、查验身份证
//
//  Created by Jacky on 2020/7/3.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 一个合法的身份证号码共有18位数字，前面17位表示地区、出生日期编号和顺序编号，最后1位是校验码。校验码的计算规则如下：
 首先对前17位数字加权求和，权重分配为：{7，9，10，5，8，4，2，1，6，3，7，9，10，5，8，4，2}；然后将计算的和对11取模得到值Z；最后按照以下关系对应Z值与校验码M的值：
 Z：0 1 2 3 4 5 6 7 8 9 10
 M：1 0 X 9 8 7 6 5 4 3 2
 
 举例如下：
 身份证号码为：320124198808240056
 前17位加权的和：
 sum=3*7+2*9+0*10+1*5+2*8+4*4+1*2+9*1+8*6+8*3+0*7+8*9+2*10+4*5+0*8+0*4+5*2
 sum=281
 z=sum%11=6
 按照Z跟M的对应关系，当Z=6时，M应该为6，也就是第18位应该为6，而当前的身份证号码最后一位为6，所以，这是一个有效的身份证号码。
 现在给定一些身份证号码，请你验证校验码的有效性，并输出有问题的号码。
 
 输入
 输入第一行给出正整数N（≤100）是输入的身份证号码的个数。随后N行，每行给出1个18位身份证号码。
 
 输出
 按照输入的顺序每行输出1个有问题的身份证号码。这里并不检验前17位是否合理，只检查前17位是否全为数字且最后1位校验码计算准确。如果所有号码都正常，则输出All passed。
 
 样例输入
 4
 320124198808240056
 12010X198901011234
 110108196711301866
 37070419881216001X
 样例输出
 12010X198901011234
 110108196711301866
 37070419881216001X
 提示
 */

#define N 101
#define L 20
#include <stdio.h>
#include <string.h>

int main() {
    int n, w[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2}, r = 0,
           sum, z;
    char M[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'},
         code[N][L] = {}, wrong[N][L] = {};

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", code[i]);
        sum = 0;
        for (int j = 0; j < 17; j++) {
            sum += (code[i][j] - '0') * w[j];
        }
        z = sum % 11;
        if (code[i][17] != M[z]) {
            strcpy(wrong[r++], code[i]);
        }
    }

    if (r > 0) {
        for (int i = 0; i < r; i++) {
            printf("%s\n", wrong[i]);
        }
    } else {
        printf("All passed\n");
    }

    return 0;
}