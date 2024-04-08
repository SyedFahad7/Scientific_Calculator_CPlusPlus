#include <cmath>
#include "additional_functions.h"

double factorial(double n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

double squareRoot(double n) {
    return sqrt(n);
}

double logarithm(double base, double n) {
    return log(n) / log(base);
}

double sine(double n) {
    return sin(n);
}

double cosine(double n) {
    return cos(n);
}

double tangent(double n) {
    return tan(n);
}
