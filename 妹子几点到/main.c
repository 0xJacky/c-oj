//
//  main.c
//  妹子几点到
//
//  Created by Jacky on 2020/3/5.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 有一个萌妹子住在南区，但是她经常要跑去文科楼上课。从南区到文科楼实在太远了，萌妹子从南区走到文科楼要用20分钟15秒的时间，所以她经常会迟到。现在萌妹子想知道她从南区出发什么时候能到达文科楼，但是她数学不太好，所以请你来帮忙，你能帮帮她吗？
 输入
 输入萌妹子出发的时间，时间由三个整数h、m、s组成，分别代表时分秒。
 输入格式为：h:m:s
 输入保证所有数据合法。
 输出
 输出萌妹子到达文科楼的时间，输出结果也是由时分秒三部分组成，同时也要满足时间的规则，即：时的取值范围在0~23，分和秒的取值范围在0~59。输出格式见样例。
 样例输入
 14:00:00
 样例输出
 14:20:15
 
 提示
 输入语句可以用scanf("%d:%d:%d",&h,&m,&s);
 
 对于小于10的数，不用输出前导0，即如果答案为12时整，输出为12:0:0,不用输出12:00:00
 */
#include <stdio.h>

int main() {
    int h, m, s;
    scanf("%d:%d:%d",&h,&m,&s);
    if (s + 15 >= 60) {
        s = (s + 15) % 60;
        m++;
    } else {
        s = s + 15;
    }
    if (m + 20 >= 60) {
        m = (m + 20) % 60;
        h++;
    } else {
        m = m + 20;
    }
    if (h >= 24) {
        h = h % 24;
    }
    printf("%d:%d:%d\n", h, m, s);
    
    return 0;
}
