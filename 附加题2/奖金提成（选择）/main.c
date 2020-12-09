//
//  main.c
//  奖金提成（选择）
//
//  Created by Jacky on 2020/3/11.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 企业发放的奖金根据利润提成，如下规则
 
 利润≤10000元时，奖金可提10%;
 
 10000<利润≤20000时，低于10000元的部分按10％提成，高于10000元的部分，可提成 7.5%;
 
 20000<利润≤40000时，低于20000元部分仍按上述办法提成，（下同），高于20000元的部分按5％提成；
 
 40000<利润≤60000元时，高于40000元的部分按3％提成；
 
 60000<利润≤100000时，高于60000元的部分按1.5%提成；
 
 利润>100000时，超过100000元的部分按1%提成
 
 注意奖金是整数，无小数
 
 输入
 第一行输入T表示有T个测试实例
 
 第二行起，每行输入一个数据（正整数且小于10的10次方）表示利润，连续输入T行
 
 输出
 每行输出应得的奖金
 
 样例输入
 3
 5000
 36000
 120000
 样例输出
 500
 2550
 4150
 */

#include <stdio.h>

int main() {
    int t, profits, bonus = 0;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &profits);
        bonus = 0;

        switch (profits / 10000) {
            default:
            case 10:
                bonus += (profits - 100000) / 100;
                profits = 100000;
            case 9:
            case 8:
            case 7:
            case 6:
                bonus += 3 * (profits - 60000) / 200;
                profits = 60000;
            case 5:
            case 4:
                bonus += 3 * (profits - 40000) / 100;
                profits = 40000;
            case 3:
            case 2:
                bonus += (profits - 20000) / 20;
                profits = 20000;
            case 1:
                bonus += 3 * (profits - 10000) / 40;
                profits = 10000;

            case 0:
                bonus += profits / 10;
                break;
        }

        printf("%d\n", bonus);
    }

    return 0;
}