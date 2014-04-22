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

    switch(n) {
        case 1:
            
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 5:
            
            break;
        default:
            x += 10;
            break;
    }

    return result;
}

int main() {
    printf("%s\n", "hello world!");
}

