//
//  main.c
//  求数列中大于数列平均值的数的个数
//
//  Created by Jacky on 2020/3/12.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入10个数，输出大于平均值的数据的个数。
 
 输入
 10个数
 
 输出
 大于平均数的个数
 
 样例输入
 1 2 3 4 5 6 7 8 9 10
 样例输出
 5
 */

#include <stdio.h>

int main() {
    int n[10], avg = 0, o = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", n+i);
        avg += n[i];
    }
    
    avg /= 10;
    
    for(int i = 0; i < 10; i++) {
        if (n[i] > avg) {
            o++;
        }
    }
    
    printf("%d\n", o);
    
    return 0;
}
