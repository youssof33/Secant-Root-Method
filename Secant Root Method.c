#include <stdio.h>
double f(double x, double A, double B, double C, double D) {
    return A * x * x * x + B * x * x + C * x + D;
}
int main() {
    double A, B, fa, fb, C, D, a, b, c;
    int n, i;

    printf("polynomial equation: f(x) = A*x^3 + B*x^2 + C*x + D\n");
    printf("Enter A: ");
    scanf("%lf", &A);
    printf("Enter B: ");
    scanf("%lf", &B);
    printf("Enter C: ");
    scanf("%lf", &C);
    printf("Enter D: ");
    scanf("%lf", &D);
    printf("\nEnter (a): ");
    scanf("%lf", &a);
    printf("Enter (b): ");
    scanf("%lf", &b);
    printf("Enter number of iterations: ");
    scanf("%d", &n);
    printf("\niteration table:\n");
    printf("Iter\t  a\t\t  b\t\t  f(a)\t\t  f(b)\t\t  (c)\n");
 
    for (i = 1; i <= n; i++) {
        fa = f(a, A, B, C, D);
        fb = f(b, A, B, C, D);

        c = b - fb * (b - a) / (fb - fa);

        printf("%d\t%.6lf\t%.6lf\t%.6lf\t%.6lf\t%.6lf\n",
            i, a, b, fa, fb, c);
        a = b;
        b = c;
    }
    return 0;
}
