#include <stdio.h>

union floatBits {
    float flutuante;
    unsigned int bits;
}num;

int main () {

    scanf("%f", &num.flutuante);
    //0.15625
    //0 01111100 01000000000000000000000

    //imprimir bit-a-bit 
    for (int i = 31; i >= 0; i--) { //do menos significativo p o mais
        printf("%u", (num.bits >> i) & 1); //0 & 1 = 0; 1 & 1 = 1
    }
}