// Homework #2: 3.56 and 3.59 from the class text.

#include <stdio.h>

// 3.56
int loop(int x, int n) {

    /*
     * A)   %esi = x
     *      %ebx = n
     *      %edi = result
     *      %edx = mask
     *
     * B)   result = -1
     *      mask   =  1
     *
     * C)   mask != 0
     *
     * D)   mask <<= n
     *
     * E)   result ^= mask & x
     *
     * F)   see below
     * */

    int result = -1;
    int mask;
    for (mask = 1; mask￼!= 0; mask <<= n) { 
      result ^= mask & x;
    }
    return result;
}

// 3.59
int switch_prob(int x, int n) {
    int result = x;

    /*  min val = 0x32
     *  max val = 0x32 + 5 = 0x37
     * */

    switch(n) {
        case 0x32:
        case 0x34:
            result <<= 2;
            break;
        case 0x35:
            result >>= 2;
            break;
        case 0x36:
            result *= 3;
            break;
        case 0x37:
            result *= result;
            break;
        case 0x33: //superfluous
        default:
            result += 10;
            break;
    }

    return result;
}

int main() {
    printf("%s\n", "hello world!");
}

