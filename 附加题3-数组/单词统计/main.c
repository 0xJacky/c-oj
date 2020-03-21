//
//  main.c
//  单词统计
//
//  Created by Jacky on 2020/3/16.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 编写一个程序，根据单词的出现频率降序打印出所输入的的各个单词。每个单词前标有它的计数值。
 
 输入
 各个单词，输入0则表示单词结束
 
 输出
 降序打印单词出现的频率和单词。单词频度相同，按出现顺序输出。
 
 样例输入
 bad
 good
 bad
 cute
 how
 good
 good
 0
 样例输出
 3 good
 2 bad
 1 cute
 1 how
 */

#define WL 20
#include <stdio.h>
#include <string.h>

struct Word {
    int count;
    char word[WL];
} input[100], temp;

int main() {
    char tmp[WL] = {'\0'}, length = 1, flag;
    
    while (1) {
        scanf("%s", tmp);
        if (strcmp(tmp, "0") == 0) {
            break;
        }
        flag = 1;
        for (int i = 0; i < length; i++) {
            if (strcmp(input[i].word, tmp) == 0) {
                flag = 0;
                input[i].count++;
            }
        }
        if (flag) {
            input[length-1].count = 1;
            strcpy(input[length-1].word, tmp);
            length++;
        }
    }
    
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            // 降序打印单词出现的频率和单词。单词频度相同，按出现顺序输出。
            if (input[j].count < input[j + 1].count ||
                (input[j].count == input[j+1].count && strlen(input[j].word) < strlen(input[j+1].word))) {
                temp = input[j + 1];
                input[j + 1] = input[j];
                input[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < length - 1; i++) {
        printf("%d %s\n", input[i].count, input[i].word);
    }
    
    return 0;
}
