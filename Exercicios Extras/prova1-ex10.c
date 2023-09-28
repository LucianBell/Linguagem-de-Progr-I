#include <stdio.h>

int main() {
    int i = 2, j = 1, k = 10;
    char str[] = "ABCDEFG";
    printf("[%c]", str[i++]);
    i += ++j;
    str[j] = 'W';
    printf("[%2.3s]", str);
    i = (str[2] >= str[j])? 2: 5;
    printf("[%5.3d]", --k % i);
    printf("[%8.1d]", 13/i);
    return(0);
} 