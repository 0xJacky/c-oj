//
//  main.c
//  五、绘制棒图
//
//  Created by Jacky on 2020/7/8.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 问题 E: 五、绘制棒图（10分）
 时间限制: 1 Sec  内存限制: 128 MB
 提交: 86  解决: 30
 [提交][状态][讨论版]
 题目描述
 下图为5个数值及其所对应的棒图，本题给出t组数据，每组数据包含n（n不超过10）个数值，请绘制出这n个数值所对应的棒图。注意，每一行开始的数字占用4列的宽度，该数字距离第一颗*的距离为5个空格；每个图形的结束输出一个空行。
 
 
 输入
 
 测试数据的组数t

 第一组数据的个数n  n个数据
 
 ……
 
 输出
 相应的棒图
 
 样例输入
2
5
5 10 3 1 4
8
1 2 3 4 5 6 7 8
 样例输出
 5     *****
 10     **********
 3     ***
 1     *
 4     ****
 
 1     *
 2     **
 3     ***
 4     ****
 5     *****
 6     ******
 7     *******
 8     ********
 提示

 */

#define N 10
#include <stdio.h>

int main() {
    int t, n, a[N];
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", a+i);
        }
        
        for (int i = 0; i < n; i++) {
            printf("%4d", a[i]);
            printf("     ");
            for (int j = 0; j < a[i]; j++) {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
