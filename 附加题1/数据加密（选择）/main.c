//
//  main.c
//  数据加密（选择）
//
//  Created by Jacky on 2020/3/7.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的，加密规则如下：每位数字都加上5,如果加上后大于10就用除以10的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换。
 
 输入
 数据个数和每项数据
 
 输出
 加密后的结果
 
 样例输入
 3
 1224
 5432
 8765
 样例输出
 9776
 7890
 0123
 */

#include <stdio.h>

int main() {
    int t, a, b, c, d, input;
    
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        scanf("%d", &input);
        
        a = input / 1000 + 5;
        b = input % 1000 / 100 + 5;
        c = input % 100 / 10 + 5;
        d = input % 100 % 10 + 5;
        
        if (a>=10) a %= 10;
        if (b>=10) b %= 10;
        if (c>=10) c %= 10;
        if (d>=10) d %= 10;
        
        printf("%d%d%d%d\n", d, c, b, a);
        
    }
    
    return 0;
}
