// HOMEWORK 1: Problems 2.66, 2.71, 2.72, and 2.81 from the class text

typedef unsigned packed_t;

#include <stdio.h>

/* 2.66:
 *  * Generate mask indicating leftmost 1 in x.  Assume w=32.
 *  * For example 0xFF00 -> 0x8000, and 0x6600 --> 0x4000.
 *  * If x = 0, then return 0.
 *  */
int leftmost_one(unsigned x) {

}

/* 2.71:
 * Extract byte from word.  Return as signed integer */
int xbyte(packed_t word, int bytenum) {
// Use only left and right shifts, and one subtraction.

    word = (word >> (bytenum << 3)) & 0xFF;
    int mask = (word << 24) >> 24;
    printf("mask is %08x\n", mask);
    return word;

// My predecessor's code is incorrect because it treats the packed bytes as
// unsigned rather than signed. This results in errors such as
// xbyte(0x0000FF00, 1) returning 255 instead of -1.
}

/* 2.72:
 * Copy integer into buffer if space is available */
void copy_int(int val, void *buf, int maxbytes) {

}

/* 2.81:
 * A:
 * B:
 * C: 
 * D:
 * E:
 * */

int main() {

    // Test cases for xbyte()

    // packed_t packed = rand() & 0xFF;
    packed_t packed = 0x12345678;
    printf("packed:   %08X\n", packed);
    int zero = xbyte(packed, 0);
    int one = xbyte(packed, 1);
    int two = xbyte(packed, 2);
    int three = xbyte(packed, 3);
    printf("zero:     %08X\n", zero);
    printf("one:      %08X\n", one);
    printf("two:      %08X\n", two);
    printf("three:    %08X\n", three);
}

