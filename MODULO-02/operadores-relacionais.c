#include <stdio.h>

void main() {
    int a = 5, b = 6;

    int c = a == b; // 0 (false)
    c = a != b; // 1 (true)
    c = a < b; // 1 (true)
    c = a > b; // 0 (false)
    c = a <= b; // 1 (true)
    c = a >= b; // 0 (false)        
    printf("resultado é %d\n", c);
}