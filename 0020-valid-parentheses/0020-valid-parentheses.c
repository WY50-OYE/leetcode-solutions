#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h> 

bool isValid(char* s) {
    int len = strlen(s);
    if (len % 2 != 0) {
        return false;
    }
    
    char* stack = (char*)malloc(sizeof(char) * len);
    int top = -1;

    for (int i = 0; i < len; i++) {
        char c = s[i];

        if (c == '(' || c == '[' || c == '{') {
            stack[++top] = c;
        } else {
            if (top == -1) {
                free(stack);
                return false;
            }

            char left = stack[top--]; 
            
            if ( (c == ')' && left != '(') || 
                 (c == ']' && left != '[') || 
                 (c == '}' && left != '{') ) {
                free(stack);
                return false;
            }
        }
    }
    
    bool result = (top == -1);
    free(stack);
    return result;
}