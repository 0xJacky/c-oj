//
//  main.c
//  数字分解与组合
//  输入一个三位正整数，分解出个位、十位、百位，并将百位数字与个位数字交换重新组合成一个整数并输出。
//  样例输入
//  123
//  样例输出
//  321
//
//  Created by Jacky on 2020/3/4.
//  Copyright © 2020 Jacky. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, b, c, input;
    
    scanf("%d", &input);
    
    a = input / 100;
    b = (input % 100) / 10;
    c = (input % 100) % 10;
    
    printf("%d%d%d\n", c, b, a);

    return 0;
}
