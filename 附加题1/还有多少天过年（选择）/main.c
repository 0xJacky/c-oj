//
//  main.c
//  还有多少天过年（选择）
//
//  Created by Jacky on 2020/3/7.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入一个日期，求该日期距离当年最后一天的天数。例如2016年12月10日，距离2016年底还有21天.
 
 输入
 输入某年某月某日
 
 输出
 输出距离最后一天还有多少天
 
 样例输入
 2016 12 10
 样例输出
 21
 */

#include <stdio.h>

int isLeapYear(int y);

int main() {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, m, d;
    int left = 0;
    scanf("%d %d %d", &y, &m, &d);
    
    if (isLeapYear(y)) {
        days[1] = 29;
    }
    
    // 从下个月开始算
    for (int i=m; i<12; i++) {
        left += days[i];
    }
    
    // 本月剩余
    left += days[m-1] - d;
    
    printf("%d\n", left);
    
    return 0;
}

int isLeapYear(int y) {
    return (y % 4 == 0 && y % 100 !=0 ) || y % 400 == 0;
}
