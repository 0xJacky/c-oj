    //
    //  main.c
    //  找好人
    //
    //  Created by Jacky on 2020/3/6.
    //  Copyright © 2020 Jacky. All rights reserved.
    //

/*题目描述
 某学校有四位同学中的一位做了好事，不留名，表扬信来了之后，校长问这四位是谁做的好事。四个人的回答分别是：
 A说：不是我
 B说：是C
 C说：是D
 D说：C胡说。
 已知三人说的是真话，一个人说的是假话，做好事的到底是谁？
 
 输入
 输入一个大写字符
 
 输出
 如果是这个字符表示的人是好人，输出：X is the good man!
 
 否则输出 : X is not the good man!
 
 样例输入
 A
 样例输出
 A is not the good man!
 */

/* A 真话 B 真话 C 好人 D 真话*/

#include <stdio.h>

int main() {
    
    char x;
    
    scanf("%c", &x);
    
    if (x == 'C') {
        printf("C is the good man!\n");
    } else {
        printf("%c is not the good man!\n", x);
    }
    
    return 0;
}
