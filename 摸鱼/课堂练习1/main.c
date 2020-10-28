//
//  main.c
//  课堂练习1
//
//  Created by Jacky on 2020/3/23.
//  Copyright © 2020 Jacky. All rights reserved.
//

#define A 1
#define B 1.00
#define C 'A'

#include <stdio.h>
#include <stdbool.h>
#include <complex.h>
#include <math.h>

int main() {
    printf("整型字节数 %ld\n", sizeof(int));
    printf("短整型字节数 %ld\n", sizeof(short int));
    printf("长整形字节数 %ld\n", sizeof(long int));
    printf("双长整形字节数 %ld\n", sizeof(long long int));
    printf("字符型字节数 %ld\n", sizeof(char));
    printf("布尔型字节数 %ld\n", sizeof(bool));
    printf("单精度浮点型字节数 %ld\n", sizeof(float));
    printf("双精度浮点型字节数 %ld\n", sizeof(double));
    printf("单精度复数浮点型字节数 %ld\n", sizeof(float _Complex));
    printf("双精度复数浮点型字节数 %ld\n", sizeof(double _Complex));
    printf("long long _Complex 字节数 %ld\n", sizeof(long long _Complex));
    printf("整型常量的字节数 %ld\n", sizeof(A));
    printf("浮点常量的字节数 %ld\n", sizeof(B));
    printf("字符常量的字节数 %ld\n", sizeof(C));
    
    char a;
    a = getchar();
    a += 32;
    putchar(a);
    printf("\n");
    
    int ans;
    float  d = 300000, p = 6000, m, r = 0.01;
    m = logf(p / (p - d  * r)) / logf(1.0 + r);
    ans = (int) ceil(m);
    printf("%d\n", ans);
    
    return 0;
}
