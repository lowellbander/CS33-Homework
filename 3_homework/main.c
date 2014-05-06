/* Homework #3: 3.64 and 3.67 from the class text
 * Lowell Paige Bander
 * UID 204 156 534
 * */

// 3.64
/* A)   8(%ebp) == &s2
 *      12(%ebp) == x
 *      16(%ebp) == &y
 *
 * B)   in descreasing order of memory address:
 *      > x + y == result.sum == s2.sum
 *      > x - y == result.diff == s2.diff
 *      > &y == s1.p
 *      > x == s1.a
 *      > &s2   // used by prod to indicate location of s2.sum, s2.diff when
 *      multiplying them together to yield the final return value
 *
 * C)   The attributes of a struct are pushed onto the stack during argument
 *      build when the struct is used as an argument of the C function.
 *
 * D)   The attributes of a returned struct are moved into caller-allocated 
 *      memory.
 *
 * */

//3.67
/* A) 
 *
 * B)
 *
 * C) (below)
 * */
void proc (union ele *up) {
    up-> _____ = *(up-> ____) - up-> ____;
}

int main() {
    printf("hello %s!\n", "world");
}

