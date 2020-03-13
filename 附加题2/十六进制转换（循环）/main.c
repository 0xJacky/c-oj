//
//  main.c
//  十六进制转换（循环）
//
//  Created by Jacky on 2020/3/13.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 以字符形式逐个读入十六进制数的每一位。边读入边计算，将十六进制数转为10进制。假设数据不含小数。
 
 输入
 测试次数T
 
 每组测试数据一行，为十六进制数。数据以#结束。
 
 输出
 对每组测试数据，输出转换后的十进制数字。
 
 样例输入
 3
 1AE#
 -123#
 BC89#
 样例输出
 430
 -291
 48265
 */

#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int ans = 0, a = 0, b = 0, length = 0, s = 0;
        char o[10] = {'\0'}, *p = o;
        scanf("%s", o);
        while (*p != '#') {
            p++;
            length++;
        }
        int j = length;
        while (j--) {
            if(isalpha(o[j])) {
                b = o[j] - 55;
            } else if (o[j] == '-') {
                s = 1;
                break;
            } else {
                b = o[j] - '0';
            }
            ans += b * pow(16, a);
            a++;
        }
        
        if (s) {
            printf("-");
        }
        printf("%d\n", ans);
    }
    return 0;
}
