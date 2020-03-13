//
//  main.c
//  六六大顺（选择）
//
//  Created by Jacky on 2020/3/11.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 小六最喜欢的数字，当然是6了。当然，他也喜欢一切6的倍数，或者数位长度是6的倍数，或者末尾数字带6的数字。当给你一个数字，你能否告诉我，这是否是小六的幸运数呢？
 
 输入
 输入数据的第一行为测试数据的个数t(1 <= t <= 100)，接下来有t行。每一行是一个数字n(1 <= n <= 10000000）
 
 输出
 对于每一组测试数据，如果是小六的幸运数字则输出“Yes”，否则输出“No”。每一组数据输出一行。
 
 样例输入
 4
 655665
 222
 6666656
 6666665
 样例输出
 Yes
 Yes
 Yes
 No
 */

#include <stdio.h>

int main() {
    int flag, input, t, l = 10;
    
    scanf("%d", &t);
    
    for (int i = 0; i<t; i++) {
        flag = 0;
        scanf("%d", &input);
        // 6 的倍数
        if (input % 6 == 0) {
            flag = 1;
        }
        // 数位长度是6的倍数
        if (input / 100000 < 10) {
            flag = 1;
        }
        // 末尾数字带 6
        l = input;
        while (l > 10) {
            l %= 10;
        }
        if (l == 6) {
            flag = 1;
        }
        if (flag) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    
    return 0;
}
