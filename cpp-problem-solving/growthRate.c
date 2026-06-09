#include <stdio.h>
#include <math.h>

double Growth(double *n, double *m, double *t) {
    return (*n) * exp((*m) * (*t));
}

int main() {
    double N, M, T;
    double *pN, *pM, *pT, result;

    scanf("%lf", &N);
    scanf("%lf", &M);
    scanf("%lf", &T);

    pN = &N;
    pM = &M;
    pT = &T;

    result = Growth(pN, pM, pT);

    printf("%.2lf", result);

    return 0;
}

