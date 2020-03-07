    //
    //  main.c
    //  分段函数
    //
    //  Created by Jacky on 2020/3/5.
    //  Copyright © 2020 Jacky. All rights reserved.
    //

/*
 题目描述
 有如下函数，编写一个程序函数，输入一个x值，要求输出相应的y值。
 y= x           x<1
 3x-1     1≤x<12
 4x-11    x≥12
 输入
 x的值
 输出
 x= ,y=
 样例输入
 -5
 样例输出
 x=-5,y=-5
 */

#include <stdio.h>

int main() {
    int x, y;
    
    scanf("%d", &x);
    
    if (x<1) {
        y = x;
    } else if (x>=1&&x<12) {
        y = 3*x-1;
    } else {
        y = 4*x-11;
    }
    
    printf("x=%d,y=%d\n", x, y);
    
    return 0;
}
