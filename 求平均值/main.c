//
//  main.c
//  求平均值
//  输入3个浮点数，求它们的平均值
//  输入
//  100.00
//  489.12
//  12454.12
//  输出
//  4347.75
//
//  Created by Jacky on 2020/3/4.
//  Copyright © 2020 Jacky. All rights reserved.
//

#define T 3
#include <stdio.h>

int main() {
    float a[T], avg = 0;
    for (int i = 0; i < T; i++) {
        scanf("%f", a+i);
        avg += a[i];
    }
    printf("%.2f\n", avg/T);
    return 0;
}
