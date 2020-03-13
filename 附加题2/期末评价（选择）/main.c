//
//  main.c
//  期末评价（选择）
//
//  Created by Jacky on 2020/3/11.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 期末已过，李老师需要根据每位同学的成绩给定对应的评语。如果某位学生拿了A，则给他评语“一个学期的努力给你带来了应有的收获”，如果拿了B，则可以说“你与成功还缺少了一点契机”，拿了C可以说“保底已到，力争上游”，拿了D可以说“失败与你只是一步之遥，莫一失足成千古恨”，拿了F可以说“一次失败代表不了什么，请从头再来”。
 
 输入
 该学生的成绩
 
 输出
 该学生的评价
 
 样例输入
 A
 样例输出
 一个学期的努力给你带来了应有的收获
 */

#include <stdio.h>

int main() {
    
    char grade;
    
    scanf("%c", &grade);
    
    switch (grade) {
        case 'A':
            printf("一个学期的努力给你带来了应有的收获");
            break;
        case 'B':
            printf("你与成功还缺少了一点契机");
            break;
        case 'C':
            printf("保底已到，力争上游");
            break;
        case 'D':
            printf("失败与你只是一步之遥，莫一失足成千古恨");
        default:
            printf("一次失败代表不了什么，请从头再来");
            break;
    }
    
    printf("\n");
    
    return 0;
}
