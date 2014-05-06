/* Homework #3: 3.64 and 3.67 from the class text
 * Lowell Paige Bander
 * UID 204 156 534
 * */

// 3.64
/* A)   8(%ebp) == &s2
 *      12(%ebp) == x == s1.a
 *      16(%ebp) == &y == s1.p
 *
 * B)   in descreasing order of memory address:
 *      > x + y == result.sum == s2.sum
 *      > x - y == result.diff == s2.diff
 *      > &y == s1.p
 *      > x == s1.a
 *      > &s2   // used by prod to indicate location of s2.sum, s2.diff when
 *      multiplying them together to yield the final return value.
 *
 * C)   The attributes of a struct are pushed onto the stack during argument
 *      build when the struct is used as an argument of the C function.
 *
 * D)   The attributes of a returned struct are moved into caller-allocated 
 *      memory.
 *
 * */

//3.67
/* A)   e1.p: 0 Bytes
 *      e1.y: 4 Bytes       // assuming 32-bit machine
 *                          // would be 8 Bytes on a 64-bit machine
 *      e2.x: 0 Bytes
 *      e2.next: 4 Bytes    // same disclaimer as above
 *
 * B)   The struct(s) would require a total of 8 Bytes on a 32-bit machine, or
 *      12 Bytes on a 64-bit machine.
 *
 * C) (below)
 * */
void proc (union ele *up) {
    up->y = *(up->next->p) - up->x;
}

int main() {
    printf("hello %s!\n", "world");
}

