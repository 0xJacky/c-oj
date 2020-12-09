//
//  main.c
//  二、满减活动
//
//  Created by Jacky on 2020/7/8.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 问题 B: 二、满减活动（20分）
 时间限制: 1 Sec  内存限制: 128 MB
 提交: 132  解决: 76
 [提交][状态][讨论版]
 题目描述
 在双十一期间，雅诗护肤品实行满减促销活动，其规则是：购买满399元（含399，以下同）的，总价减80元；购买满299元的，总价减50元；购买满199元的，总价减30元；其余的没有减价。假设用户只购买一种商品，输入用户所购买商品的单价与数量，计算并输出实际需要支付的金额，结果保留两位小数，具体格式见样例输出。
 
 输入
 产品的单价与数量
 
 输出
 实际支付的金额
 
 样例输入
 29.9 15
 样例输出
 368.50
 提示
 */

#include <stdio.h>

int main() {
    float a, s;
    int b;
    scanf("%f %d", &a, &b);
    s = a * b;
    if (s >= 399) {
        s -= 80;
    } else if (s >= 299) {
        s -= 50;
    } else if (s >= 199) {
        s -= 30;
    }
    printf("%.2f\n", s);
    return 0;
}