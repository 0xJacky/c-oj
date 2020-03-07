//
//  main.c
//  成绩等级
//
//  Created by Jacky on 2020/3/5.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 给出一百分制成绩（浮点类型），要求输出成绩等级’A’，’B’，’C’，’D’，’E’。90分及以上为’A’，[80,90)分为’B’， [70，80)分为’C’， [60，70)分为’D’，60分以下为’E’。
 要求
 1、用t表示t组测试用例。
 2、用swtich语句实现
 输入
 百分制成绩，最多有一位小数
 输出
 百分制成绩和成绩等级
 样例输入
 91.8
 样例输出
 score:91.8,grade:A

 */

#include <stdio.h>

int main() {
    int t;
    float score;
    char grade;
    
    scanf("%d", &t);
    
    for (int i = 0; i<t; i++) {
        scanf("%f", &score);
        switch ((int)score/10) {
            case 9:
                grade = 'A';
                break;
                
            case 8:
                grade = 'B';
                break;
            case 7:
                grade = 'C';
                break;
            case 6:
                grade = 'D';
                break;
            default:
                grade = 'E';
                break;
        }
        printf("score:%.1f,grade:%c\n", score, grade);
    }
    
    return 0;
}
