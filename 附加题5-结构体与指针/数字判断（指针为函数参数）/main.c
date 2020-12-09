//
//  main.c
//  数字判断（指针为函数参数）
//
//  Created by Jacky on 2020/3/19.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入一个字符串，判断这个字符串是否一个完全整数值的字符串，例如输入"1234"，那么表示整数1234，输入"12a3"就表示只是一个字符串，不是一个整数
 要求编写函数isNumber，参数是一个字符指针，返回值是整数类型
 如果字符串表示一个整数，则计算出这个整数并且返回
 如果字符串不是表示一个整数，则返回-1
 主函数必须调用isNumber来判断字符串，不能使用任何C++自带或第三方的类似函数
 
 输入
 输入t表示有t个测试实例
 每行输入一个字符串
 依次输入t行
 
 输出
 每行输出判断结果
 
 样例输入
 3
 1234
 567a
 0890
 样例输出
 1234
 -1
 890
 */

#define N 50
#include <stdio.h>

int isNumber(char *a) {
    int i = 0, flag = 1;
    while (*(a + i) != '\0') {
        if (*(a + i) >= 58 || *(a + i) <= 47) {
            flag = 0;
            break;
        }
        i++;
    }
    if (flag) {
        return i;
    } else {
        return -1;
    }
}

void print(char *p, int length) {
    int i = 0;
    while (*(p + i) == '0') {
        i++;
    }
    for (int j = i; j < length; j++) {
        printf("%d", *(p + j) - '0');
    }
    printf("\n");
}

int main() {
    int t, length;
    char input[N];
    scanf("%d", &t);
    while (t--) {
        scanf("%s", input);
        length = isNumber(input);
        if (length > 0) {
            print(input, length);
        } else {
            printf("-1\n");
        }
    }
    return 0;
}