/* Lowell Paige Bander
 * UID 204 156 534
 *
 * Homework #4: 2.88 and 2.89 from the class text, plus the question attached
 * (from a previous exam).
 * */

// 2.88
/* 
 *  A) 
 *
 *  B) 
 *
 *  C) 
 *
 *  D) 
 *
 *  E) 
 *
 * */

// 2.89
float fpwr2(int x) {

    /* Result exponent and fraction */
    unsigned exp, frac;
    unsigned u;

    if (x < ____) {
        /* Too small. Return 0.0 */
        exp = ____;
        frac = ____;
    } else if (x < ____) {
        /* Denormalized result */
        exp = ____;
        frac = ____;
    } else if (x < ____) {
        /* Normalized result */
        exp = ____;
        frac = ____;
    } else {
        /* Too big. Return +infinity */
        exp = ____;
        frac = ____;
    }
    /* Oack exp and frac into 32 bits  */
    u = exp << 23 | frac;
    return u2f(u);
}

// sample question
/*  printf("%s", magic8ball[3][2]);
 *  */


int main() {

}
