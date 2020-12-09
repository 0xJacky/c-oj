//
//  main.c
//  回文判断(函数)
//
//  Created by Jacky on 2020/3/18.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 编写一个函数int isPalindrome(char s[])，判断参数表示的字符串是否是回文，如果是返回1，否则返回0。在主函数中调用它，判断输入的字符串是否是回文，如果是，输出“yes”，如果不是，输出"No"。
 
 输入
 测试数据的个数 t
 第一个字符串
 第二个字符串
 ........
 
 输出
 如果是，输出“yes”，如果不是，输出"No"
 
 样例输入
 3
 abba
 abcba
 ab
 样例输出
 Yes
 Yes
 No
 */

#define N 50
#include <stdio.h>
#include <string.h>

int isPalindrome(char s[]) {
    int length = (int)strlen(s), i = 0, j = length - 1, flag = 1;
    while (i != j) {
        if (s[i] != s[j]) {
            flag = 0;
            break;
        }
        i++;
        if (i == j) {
            break;
        }
        j--;
    }
    return flag;
}

int main() {
    int t;
    char s[N] = {'\0'};
    scanf("%d", &t);
    while (t--) {
        scanf("%s", s);
        if (isPalindrome(s)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}