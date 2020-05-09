//
//  main.c
//  箱子匹配（选择）
//
//  Created by Jacky on 2020/3/7.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 每个箱子都有长宽高，我们需要判断一个箱子能否放入另一个箱子中。
 
 例如有箱子A的尺寸是 3 x 4 x 5，箱子B的尺寸 是 5 x 6 x 4，经过比较判断，可以知道箱子A能够放入箱子B中，我们就说箱子A匹配箱子B。
 
 注意，当两个箱子尺寸相等，我们也认为它们匹配。
 
 输入
 第一行输入参数T，表示有T个测试实例
 
 第二行输入第1组实例的箱子A的长、宽、高，输入数值为小于1000的自然数
 
 第三行输入第1组实例的箱子B的长、宽、高，输入数值为小于1000的自然数
 
 以此类推
 
 输出
 如果两个箱子匹配，输出yes，否则输出no。逐行输出每一组的箱子匹配结果。
 
 样例输入
 3
 3 4 5
 5 6 4
 5 6 4
 3 4 5
 5 6 7
 7 4 7
 样例输出
 yes
 yes
 no
 */

#define N 3
#include <stdio.h>

int *sort(int array[]);

int main() {
    
    int t, a[3], b[3];
    
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &a[0], &a[1], &a[2]);
        scanf("%d %d %d", &b[0], &b[1], &b[2]);
        
        sort(a);
        sort(b);
        
        if ((a[0] <= b[0] && a[1] <= b[1] && a[2] <= b[2]) || (b[0] <= a[0] && b[1] <= a[1] && b[2] <= a[2])) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
    
    return 0;
}

int *sort(int array[]) {
    int p, c;
    // 冒泡排序超时了 要用插入排序
    for (int i = 1; i < N; i++) {
        p = i - 1;
        c = array[i];
        while ( p >= 0 && array[p] > c) {
            array[p+1] = array[p];
            p--;
        }
        array[p+1] = c;
    }
    return array;
}
