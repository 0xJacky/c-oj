//
//  main.c
//  三、统计A
//
//  Created by Jacky on 2020/7/3.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入一行字符，以“#”结尾，统计并输出字母A和a出现的次数。
 
 输入
 一行字符串，以“#”结尾。
 
 输出
 输出字母A和a出现的次数
 
 样例输入
 12cdfd34AAA()&hjGFF56!aa@78#
 样例输出
 5
 提示
 */

#include <stdio.h>

int main() {
    char tmp = '\0';
    int a = 0;
    
    while (tmp != '#') {
        scanf("%c", &tmp);
        if(tmp == 'A' || tmp == 'a') a++;
    }
    
    printf("%d\n", a);
    
    return 0;
}
