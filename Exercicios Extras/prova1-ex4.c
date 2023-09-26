#include <stdio.h>

main() {
 int a=8, b=2, c=3, d=4;
 int r = a + b;
 for( ; ; ){
 if( a-- < ++b) continue;
 d++; c--;
 if( d < a) break;
 r += d - a;
 }
 printf("R= %d \n", r);

 return 0;
} 