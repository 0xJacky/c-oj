//
//  main.c
//  test
//
//  Created by Jacky on 2020/3/7.
//  Copyright © 2020 Jacky. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int input[3];
    char s = '\0';
    
    for (int i = 0; i < 3 && s != '\n'; i++) {
        scanf("%d", input+i);
        s = getchar();
    }
    
    printf("%d\n", input[0]);
    printf("%d\n", input[1]);
    printf("%d\n", input[2]);
    
    return 0;
}
