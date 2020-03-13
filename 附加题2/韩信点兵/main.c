//
//  main.c
//  韩信点兵
//
//  Created by Jacky on 2020/3/12.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 韩信有一队兵，至少有M人，他想知道有多少人，便让士兵排队报数，按从1到5报数，记下最末一个士兵报的数为1；再按从1到6报数，记下最末一个士兵报的数为5；按从1到7报数，记下最末一个士兵报的数为4；最后按从1到11报数，最末一个士兵报的数为10。问，韩信至少有多少兵？
 输入
 输入M
 
 输出
 输出M以上最少的人数
 
 样例输入
 1000
 样例输出
 2111
 */

#include <stdio.h>

int main() {
    int m, k = 0;
    
    scanf("%d", &m);
    
    while (1) {
        if (((m + 5*k + 1) % 6 == 5)&&((m + 5*k + 1) % 7 == 4)&&((m + 5*k + 1) % 11 == 10)) {
            break;
        }
        k++;
    }
    
    printf("%d\n", m + 5*k + 1);
    
    return 0;
}
