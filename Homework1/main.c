// HOMEWORK 1: Problems 2.66, 2.71, 2.72, and 2.81 from the class text

typedef unsigned packed_t;

#include <stdio.h>

/* 2.66:
 *  * Generate mask indicating leftmost 1 in x.  Assume w=32.
 *  * For example 0xFF00 -> 0x8000, and 0x6600 --> 0x4000.
 *  * If x = 0, then return 0.
 *  */
int leftmost_one(unsigned x) {

    return 0;
}

void test_leftmost_one() {
    unsigned num = rand() & 0xFFFFFFFF; 
    int leftmost = leftmost_one(num);
    printf("the leftmost one of %08x is %08x\n", num, leftmost);
}

/* 2.71:
 * Extract byte from word.  Return as signed integer */
int xbyte(packed_t word, int bytenum) {

    word = (word >> (bytenum << 3)) & 0xFF;
    int mask = word & 0x00000080;
    mask = (mask << 24) >> 24;
    return word | mask;

// My predecessor's code is incorrect because it treats the packed bytes as
// unsigned rather than signed. This results in errors such as
// xbyte(0x0000FF00, 1) returning 255 instead of -1.
}

void test_xbyte() {
    packed_t packed = rand() & 0xFFFFFFFF;
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

/* 2.72:
 * Copy integer into buffer if space is available */
void copy_int(int val, void *buf, int maxbytes) {
    if (maxbytes - sizeof(val) >= 0) {
        printf("Copied value into buffer!\n");
    } else {
        printf("Didn't copy value into buffer!\n");
    }

// The conditional test in the given code always succeeds because when signed
// (e.g. maxbytes) and unsigned (e.g. sizeof(val)) values are mixed in a single
// expression, the result is unsigned. Unsigned values are always nonnegative,
// and so the original comparison will always return true.
}

void test_copy_int() {
   int foo = 3;
   int bar = 3;
   int max = 2;
   char* buffer;
   copy_int(foo, buffer, max);
   copy_int(bar, buffer, max);
}

/* 2.81:
 * A: Always yields 1. If x and y are on a number line, then x less than y means
 * x is to the left of y. Negation is symmetric about the origin, so if x is
 * left of y on the number line, then -x is right of -y on the number line. That
 * is, -x os greater than -y.
 *
 * B: Always yields 1. Left shifting by 4 is equivalent to multiplying by 16, so
 *          ((x+y)<<4) + y-x = 16(x+y) + y-x
 *                           = 16x + 16y + y - x
 *                           = 17y + 15x
 * 
 * C: 
 * 
 * D:
 * 
 * E:
 * */

int main() {
    //test_xbyte();
    //test_leftmost_one();
    test_copy_int();
}

