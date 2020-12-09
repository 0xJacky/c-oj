//
//  main.c
//  利润提成（选择）
//
//  Created by Jacky on 2020/3/7.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 企业发放的奖金根据利润提成。利润（为整数）低于或等于100000元的，奖金可提10%;
 利润高于100000元，低于200000元（100000<I≤200000）时，低于100000元的部分按10％提成，高于100000元的部分，可提成 7.5%;
 200000<I≤400000时，低于200000元部分仍按上述办法提成，（下同），高于200000元的部分按5％提成；
 400000<I≤600000元时，高于400000元的部分按3％提成；600000<I≤1000000时，高于600000元的部分按1.5%提成；
 I>1000000时，超过1000000元的部分按1%提成。从键盘输入当月利润I,求应发奖金总数。
 
 输入
 一个整数，当月利润。
 
 输出
 一个整数，奖金。
 
 样例输入
 900
 样例输出
 90
 提示
 用Switch要比用if的看起来更清晰。
 */

#include <stdio.h>

int main() {
    int profits, bonus = 0;
    scanf("%d", &profits);

    switch (profits / 100000) {
        default:
        case 10:
            bonus += (profits - 1000000) / 100;
            profits = 1000000;
        case 9:
        case 8:
        case 7:
        case 6:
            bonus += 3 * (profits - 600000) / 200;
            profits = 600000;
        case 5:
        case 4:
            bonus += 3 * (profits - 400000) / 100;
            profits = 400000;
        case 3:
        case 2:
            bonus += (profits - 200000) / 20;
            profits = 200000;
        case 1:
            bonus += 3 * (profits - 100000) / 40;
            profits = 100000;

        case 0:
            bonus += profits / 10;
            break;
    }

    printf("%d\n", bonus);

    return 0;
}