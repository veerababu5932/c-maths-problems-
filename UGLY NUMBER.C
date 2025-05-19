An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.
This means that he number can be expressed as a product of powers of 2, 3, and 5 only
example
6: Prime factors are 2 and 3
1 :No prime factors → Ugly number.
14: Prime factors are 2 and 7 → Not an ugly number (7 is not allowed).
8: Prime factor is 2 (2³) → Ugly number.
30: Prime factors are 2, 3, and 5 (2 × 3 × 5) → Ugly number

#include <stdbool.h>

bool isUgly(int n) {
    if (n <= 0) {
        return false;
    }
    while (n > 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else if (n % 3 == 0) {
            n = n / 3;
        } else if (n % 5 == 0) {
            n = n / 5;
        } else {
            break;
        }
    }
    return (n == 1);
}
