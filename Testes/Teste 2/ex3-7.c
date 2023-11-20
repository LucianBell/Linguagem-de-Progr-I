/*
Assumindo que M1[] é um vetor do tipo int, quais das seguintes  expressões referenciam o
valor do terceiro elemento de M1?
a) *(M1 + 2)          b) *(M1 + 4)             c) M1 + 4                       d) M1 + 2
LETRA A.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M1[4] = {0, 1, 2, 3};
    int *pont_m1 = M1;

    printf("%d.", *(pont_m1 + 2));

    return 0;
}
