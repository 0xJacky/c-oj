//
//  main.c
//  test
//
//  Created by Jacky on 2020/3/7.
//  Copyright © 2020 Jacky. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    
    char a[10] = {'\0'}, b[] = {'A', 'B', 'C'};
    
    scanf("%s", a);
    
    printf("%d\n", strcmp(a, b));
    
    return 0;
}
