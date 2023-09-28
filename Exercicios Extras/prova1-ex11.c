#include <stdio.h>

int main() {
 int a[] = {7,7,15,15};
 int b[] = {2,3,2,3};
 float f = 2;

 int i = sizeof(a) / sizeof(int) - 3;
 f += a[i] / b[++i];
 printf("%.2f", f);

 return 0;
} 
