//
//  main.c
//  投票选举
//
//  Created by Jacky on 2020/3/13.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 对候选人得票的统计程序。设有3个候选人，每个选民投票输入一个得票的候选人的名字，要求最后输出各人得票结果。
 
 三个候选人的名字分别为Li， Zhang， Fu。
 
 输入
 第一行输入输入选票数n
 
 第二行起输入n行，每行是一个候选人名字
 
 输出
 三个候选人的统计结果
 
 样例输入
 3
 Li
 Fu
 Fu
 样例输出
 Li:1
 Zhang:0
 Fu:2
 */

#include <stdio.h>
#include <string.h>

int main() {
    int n, a = 0, b = 0, c = 0;
    char Li[] = "Li", Zhang[] = "Zhang", Fu[] = "Fu";
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        char vote[10] = {'\0'};
        scanf("%s", vote);
        if (strcmp(vote, Li) == 0) {
            a++;
        } else if (strcmp(vote, Zhang) == 0) {
            b++;
        } else if (strcmp(vote, Fu) == 0) {
            c++;
        }
    }
    
    printf("Li:%d\nZhang:%d\nFu:%d\n", a, b, c);
    
    return 0;
}
